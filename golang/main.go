package main

import (
    "os"
    "flag"    
    "io/ioutil"
    //"bytes"
    //"io"
    //"encoding/asn1"
    "fmt"
    "testapp/ipmtscd"   
    "github.com/TOPAS-2545/ber"
)

func check(e error) {
    if e != nil {
        panic(e)
    }
}


func main() {

    var mode string

    mySet := flag.NewFlagSet("",flag.ExitOnError)
    mySet.StringVar(&mode, "m", "mode", "the operation to perform")
    mySet.Parse(os.Args[1:])
    

    if mode == "encode" {
    
        fmt.Println("Performing encode")
    
        tryme := IPMTSCD.IpmstscdLoopTypeDetectorInformation{
                        LoopOccupancyState: true,
                        LoopOccupancyStateDuration: 33,
                        LoopOccupancyPreviousStateDuration: 33,
                        LoopOccupancyRate: 55.8,
                        LoopVolume: 66,
                    }
                    
        generatedInnerBytes, err := ber.Marshal(tryme)
        
        if err != nil {
            fmt.Println("Failed to unmarshall message: ", err.Error())
        }
    
        // we need to wrap the choice so it works correcty
        ipmstscdDetInformationChoice := ber.RawValue{0, 2, false, generatedInnerBytes, []byte{}}
    
        ipmstscdDetInformation := ber.RawValue{Class: ber.ClassContextSpecific , Tag: 2, IsCompound: true, Bytes: ipmstscdDetInformationChoice.Bytes}
        
        expected := IPMTSCD.IPMSTSCD_Data{
    
            DetectorController_index: 1,
                
            IpmstscdDetData: []struct{
                IpmstscdDetID       int64
                IpmstscdDetType     ber.Enumerated
                IpmstscdDetInformation  ber.RawValue
                Detector_time_location IPMTSCD.GeneralTimeLocationCore "asn1:\"optional\""
            }{
                {        
                    IpmstscdDetID: 0,
                    IpmstscdDetType: 0,
                    IpmstscdDetInformation: ber.RawValue{ber.ClassContextSpecific, 1, true, ipmstscdDetInformation.Bytes, []byte{}},
                },
            },
            
        }
    
        generatedBytes, err := ber.Marshal(expected)    
        
        
        err = os.WriteFile("../golang-detector.ber", generatedBytes, 0644)
        check(err)
        
            
        fmt.Println("generation complete")
    }
    
    
    if mode == "decode" {
    
        fmt.Println("Performing decode")
        
        // load in the BER generated by the python system
        contents,_ := ioutil.ReadFile("../python-detector.ber")
    
        var t IPMTSCD.IPMSTSCD_Data
    
        _, err1 := ber.Unmarshal(contents, &t)
    
        check(err1)
    
        fmt.Printf("IpmstscdDetData: %+v \n",t)
        
        if t.IpmstscdDetData[0].IpmstscdDetType != 0 {
            panic("Not correct Detector type")        
        }
        
        var loopData IPMTSCD.IpmstscdLoopTypeDetectorInformation 
        
        _, err2 := ber.Unmarshal(t.IpmstscdDetData[0].IpmstscdDetInformation.Bytes, &loopData)
        
        check(err2)
        
        fmt.Printf("loopData: %+v \n",loopData)
     
    }   
}


