package IPMTSCD

import "github.com/TOPAS-2545/ber"

type Time struct {
	Time_Year_qty		int64		`asn1:"optional,tag:0"`
	Time_Month_qty		int64		`asn1:"optional,tag:1"`
	Time_Day_qty		int64		`asn1:"optional,tag:2"`
	Time_Hour_qty		int64		`asn1:"optional,tag:3"`
	Time_Minute_qty		int64		`asn1:"optional,tag:4"`
	Time_Second_qty		int64		`asn1:"optional,tag:5"`
	Time_SecondFractions	ber.RawValue	`asn1:"explicit,tag:6"`
	Time_Timezone		struct {
		Timezone_Hour_qty	int64	`asn1:"optional,tag:0"`
		Time_Minute_qty		int64	`asn1:"optional,tag:1"`
	}	`asn1:"optional,explicit,tag:7"`
}
type IPMSTSCDData struct {
	DetectorController_index		int64			`asn1:"tag:0"`
	DetectorController_Time_Location	GeneralTimeLocationCore	`asn1:"optional,tag:1"`
	IpmstscdDetData				[]IpmstscdDetDataSeq	`asn1:"optional,tag:2"`
}
type GeneralTimeLocationCore struct {
	Otdv_CurrentTime	Time	`asn1:"tag:0"`
	Otdv_LocationLongitude	int64	`asn1:"optional,tag:1"`
	Otdv_LocationLatitude	int64	`asn1:"optional,tag:2"`
	Otdv_LocationElevation	int64	`asn1:"optional,tag:3"`
}
type IpmstscdDetDataSeq struct {
	IpmstscdDetID		int64			`asn1:"tag:0"`
	IpmstscdDetType		ber.Enumerated		`asn1:"tag:1"`
	IpmstscdDetInformation	ber.RawValue		`asn1:"explicit,tag:2"`
	Detector_Time_Location	GeneralTimeLocationCore	`asn1:"optional,tag:3"`
}
type IpmstscdLoopTypeDetectorInformation struct {
	LoopDataDuration			int64				`asn1:"optional,tag:0"`
	LoopOccupancyState			bool				`asn1:"tag:1"`
	LoopOccupancyStateDuration		int64				`asn1:"tag:2"`
	LoopOccupancyPreviousStateDuration	int64				`asn1:"tag:3"`
	LoopOccupancyRate			float64				`asn1:"tag:4"`
	LoopSpeed				float64				`asn1:"optional,tag:5"`
	LoopVolume				int64				`asn1:"tag:6"`
	LoopOccNoccHistory			[]IpmstscdOccNoccHistory	`asn1:"optional,tag:7"`
	LoopErrorState				ber.Enumerated			`asn1:"optional,tag:8"`
	LoopUserData				[]byte				`asn1:"optional,tag:9"`
	LoopTargetType				int64				`asn1:"optional,tag:10"`
	LoopDirectionDiscrimination		bool				`asn1:"optional,tag:11"`
}
type IpmstscdImageTypeDetectorInformation struct {
	ImgDataDuration		int64			`asn1:"optional,tag:0"`
	ImgQueueLength		int64			`asn1:"optional,tag:1"`
	ImgOccupancyRate	float64			`asn1:"optional,tag:2"`
	ImgSpeed		float64			`asn1:"optional,tag:3"`
	ImgVolume		int64			`asn1:"tag:4"`
	ImgOccNoccHistory	IpmstscdOccNoccHistory	`asn1:"optional,tag:5"`
	ImgErrorState		ber.Enumerated		`asn1:"optional,tag:6"`
	ImgUserData		[]byte			`asn1:"optional,tag:7"`
}
type IpmstscdIDTypeDetectorInformation struct {
	IdSequenceNumber	int64		`asn1:"tag:0"`
	IdDeviceType		ber.Enumerated	`asn1:"optional,tag:1"`
	IdVehicleIdentity	[]byte		`asn1:"tag:2"`
	IdVehicleType		int64		`asn1:"optional,tag:3"`
	IdVehicleUse		int64		`asn1:"optional,tag:4"`
	IdDetectionLane		int64		`asn1:"optional,tag:5"`
	IdDetectionLaneMedian	int64		`asn1:"optional,tag:6"`
	IdDetectionSpeed	float64		`asn1:"optional,tag:7"`
	IdOccupancy		int64		`asn1:"optional,tag:8"`
	IdErrorState		ber.Enumerated	`asn1:"optional,tag:9"`
	IdTagInfo		[]byte		`asn1:"optional,tag:10"`
	IdUserData		[]byte		`asn1:"optional,tag:11"`
}
type IpmstscdOccNoccHistory struct {
	OccupancyTimes		int64	`asn1:"tag:0"`
	NonOccupancyTimes	int64	`asn1:"tag:1"`
}
type IpmstscdIDTypeDetectorInformationType2 struct {
	VehicleInfo []VehicleInfoSeq `asn1:"tag:0"`
}
type VehicleInfoSeq struct {
	VehicleID	[]byte	`asn1:"tag:0"`
	IdData		[]byte	`asn1:"optional,tag:1"`
}
type IpmstscdImageTypeDetectorInformationType2 struct {
	CongestionInfo	struct {
		CongestionLength1	int64	`asn1:"tag:0"`
		VehicleStartPosition1	int64	`asn1:"tag:1"`
		CongestionLength2	int64	`asn1:"tag:2"`
		VehicleStartPosition2	int64	`asn1:"tag:3"`
	}	`asn1:"tag:0"`
	DirectionDensity	[]DirectionDensitySeq	`asn1:"tag:1"`
}
type DirectionDensitySeq struct {
	DirectionNo		int64		`asn1:"tag:0"`
	Det_Status		ber.Enumerated	`asn1:"optional,tag:1"`
	DirectionDensity	int64		`asn1:"tag:2"`
}
type IpmstscdOccTypeDetectorInformationType2 struct {
	Det_Accmulated	[]Det_AccmulatedSeq	`asn1:"tag:0"`
	Det_SerialInfo	[]Det_SerialInfoSeq	`asn1:"tag:1"`
	Det_Velocity	[]Det_VelocitySeq	`asn1:"tag:2"`
	Det_Info	[]byte			`asn1:"tag:3"`
	IDetStatus	[]byte			`asn1:"optional,tag:4"`
}
type Det_AccmulatedSeq struct {
	Det_nbr		int64		`asn1:"tag:0"`
	Det_Status	ber.Enumerated	`asn1:"optional,tag:1"`
	Density		int64		`asn1:"tag:2"`
	Occupancy	int64		`asn1:"tag:3"`
	DetPulseErr	int64		`asn1:"tag:4"`
}
type Det_SerialInfoSeq struct {
	Det_nbr		int64		`asn1:"tag:0"`
	Det_Status	ber.Enumerated	`asn1:"optional,tag:1"`
	SerialInfo	[]byte		`asn1:"tag:2"`
}
type Det_VelocitySeq struct {
	Det_nbr		int64		`asn1:"tag:0"`
	VehicleType	ber.Enumerated	`asn1:"tag:1"`
	Velocity	int64		`asn1:"tag:2"`
}
