package IPMTSCD

import "github.com/TOPAS-2545/ber"

type Time struct {
	Time_Year_qty		int64	`asn1:"optional"`
	Time_Month_qty		int64	`asn1:"optional"`
	Time_Day_qty		int64	`asn1:"optional"`
	Time_Hour_qty		int64	`asn1:"optional"`
	Time_Minute_qty		int64	`asn1:"optional"`
	Time_Second_qty		int64	`asn1:"optional"`
	Time_SecondFractions	interface {
	}
	Time_Timezone	struct {
		Timezone_Hour_qty	int64	`asn1:"optional"`
		Time_Minute_qty		int64	`asn1:"optional"`
	}
}
type IPMSTSCD_Data struct {
	DetectorController_index		int64			`asn1:"explicit,tag:0"`
	DetectorController_Time_Location	GeneralTimeLocationCore	`asn1:"optional,explicit,tag:1"`
	IpmstscdDetData				[]struct {
		IpmstscdDetID		int64
		IpmstscdDetType		ber.Enumerated
		IpmstscdDetInformation	ber.RawValue
		Detector_time_location	GeneralTimeLocationCore	`asn1:"optional"`
	}	`asn1:"optional"`
}
type GeneralTimeLocationCore struct {
	Otdv_CurrentTime	Time	`asn1:"explicit,tag:0"`
	Otdv_LocationLongitude	int64	`asn1:"optional,explicit,tag:1"`
	Otdv_LocationLatitude	int64	`asn1:"optional,explicit,tag:2"`
	Otdv_LocationElevation	int64	`asn1:"optional,explicit,tag:3"`
}
type IpmstscdLoopTypeDetectorInformation struct {
	LoopDataDuration			int64				`asn1:"optional,explicit,tag:0"`
	LoopOccupancyState			bool				`asn1:"explicit,tag:1"`
	LoopOccupancyStateDuration		int64				`asn1:"explicit,tag:2"`
	LoopOccupancyPreviousStateDuration	int64				`asn1:"explicit,tag:3"`
	LoopOccupancyRate			float64				`asn1:"explicit,tag:4"`
	LoopSpeed				float64				`asn1:"optional,explicit,tag:5"`
	LoopVolume				int64				`asn1:"explicit,tag:6"`
	LoopOccNoccHistory			[]IpmstscdOccNoccHistory	`asn1:"optional,explicit,tag:7"`
	LoopErrorState				ber.Enumerated			`asn1:"optional,explicit,tag:8"`
	LoopUserData				[]byte				`asn1:"optional,explicit,tag:9"`
	LoopTargetType				int64				`asn1:"optional,explicit,tag:10"`
	LoopDirectionDiscrimination		bool				`asn1:"optional,explicit,tag:11"`
}
type IpmstscdOccNoccHistory struct {
	OccupancyTimes		int64
	NonOccupancyTimes	int64
}
type Det_Accmulated = []struct {
	Det_nbr		int64
	Det_Status	ber.Enumerated	`asn1:"optional"`
	Density		int64
	Occupancy	int64
	DetPulseErr	int64
}
type Det_SerialInfo = []struct {
	Det_nbr		int64
	Det_Status	ber.Enumerated	`asn1:"optional"`
	SerialInfo	[]byte
}
type Det_Velocity = []struct {
	Det_nbr		int64
	VehicleType	ber.Enumerated
	Velocity	int64
}
type Det_Info = []byte
type IDetStatus = []byte
type IpmstscdImageTypeDetectorInformation struct {
	ImgDataDuration		int64	`asn1:"optional"`
	ImgQueueLength		int64	`asn1:"optional"`
	ImgOccupancyRate	float64	`asn1:"optional"`
	ImgSpeed		float64	`asn1:"optional"`
	ImgVolume		int64
	ImgOccNoccHistory	IpmstscdOccNoccHistory	`asn1:"optional"`
	ImgErrorState		ber.Enumerated		`asn1:"optional"`
	ImgUserData		[]byte			`asn1:"optional"`
}
type CongestionInfo struct {
	CongestionLength1	int64
	VehicleStartPosition1	int64
	CongestionLength2	int64
	VehicleStartPosition2	int64
}
type DirectionDensity = []struct {
	DirectionNo		int64
	Det_Status		ber.Enumerated	`asn1:"optional"`
	DirectionDensity	int64
}
type IpmstscdIDTypeDetectorInformation struct {
	IdSequenceNumber	int64
	IdDeviceType		ber.Enumerated	`asn1:"optional"`
	IdVehicleIdentity	[]byte
	IdVehicleType		int64		`asn1:"optional"`
	IdVehicleUse		int64		`asn1:"optional"`
	IdDetectionLane		int64		`asn1:"optional"`
	IdDetectionLaneMedian	int64		`asn1:"optional"`
	IdDetectionSpeed	float64		`asn1:"optional"`
	IdOccupancy		int64		`asn1:"optional"`
	IdErrorState		ber.Enumerated	`asn1:"optional"`
	IdTagInfo		[]byte		`asn1:"optional"`
	IdUserData		[]byte		`asn1:"optional"`
}
type VehicleInfo = []struct {
	VehicleID	[]byte
	IdData		[]byte	`asn1:"optional"`
}
