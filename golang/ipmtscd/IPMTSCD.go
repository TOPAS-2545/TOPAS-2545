package IPMTSCD

import "github.com/TOPAS-2545/ber"

type IPMSTSCDData struct {
	DetectorControllerInformation	DetectorControllerInformation	`asn1:"optional,tag:0"`
	IpmstscdDetData			[]IpmstscdDetDataSeq		`asn1:"optional,tag:1"`
}
type DetectorControllerInformation struct {
	DetectorController_index		int64			`asn1:"tag:0"`
	DetectorController_Time_Location	GeneralTimeLocationCore	`asn1:"optional,tag:1"`
}
type GeneralTimeLocationCore struct {
	CurrentTime		Time	`asn1:"tag:0"`
	LocationLongitude	int64	`asn1:"optional,tag:1"`
	LocationLatitude	int64	`asn1:"optional,tag:2"`
	LocationElevation	int64	`asn1:"optional,tag:3"`
}
type IpmstscdDetDataSeq struct {
	IpmstscdDetID		int64			`asn1:"tag:0"`
	IpmstscdDetType		ber.Enumerated		`asn1:"tag:1"`
	IpmstscdDetInformation	ber.RawValue		`asn1:"explicit,tag:2"`
	Detector_Time_Location	GeneralTimeLocationCore	`asn1:"optional,tag:3"`
}
type IpmstscdOccTypeDetectorInformation struct {
	OccupancyDataDuration		int64				`asn1:"optional,tag:0"`
	OccupancyState			bool				`asn1:"tag:1"`
	OccupancyStateDuration		int64				`asn1:"tag:2"`
	OccupancyPreviousStateDuration	int64				`asn1:"tag:3"`
	OccupancyRate			float64				`asn1:"tag:4"`
	OccupancySpeed			float64				`asn1:"optional,tag:5"`
	OccupancyVolume			int64				`asn1:"tag:6"`
	OccNoccHistory			[]IpmstscdOccNoccHistory	`asn1:"optional,tag:7"`
	OccupancyErrorState		ber.Enumerated			`asn1:"optional,tag:8"`
	UserData			[]byte				`asn1:"optional,tag:9"`
	TargetType			int64				`asn1:"optional,tag:10"`
	DirectionDiscrimination		bool				`asn1:"optional,tag:11"`
}
type IpmstscdImageTypeDetectorInformation struct {
	DataDuration		int64			`asn1:"optional,tag:0"`
	VolumeQuantity		int64			`asn1:"tag:1"`
	QueueLength		int64			`asn1:"optional,tag:2"`
	AverageOccupancyRate	float64			`asn1:"optional,tag:3"`
	AverageSpeed		float64			`asn1:"optional,tag:4"`
	OccNoccHistory		IpmstscdOccNoccHistory	`asn1:"optional,tag:5"`
	ErrorState		ber.Enumerated		`asn1:"optional,tag:6"`
	UserData		[]byte			`asn1:"optional,tag:7"`
}
type IpmstscdIDTypeDetectorInformation struct {
	SequenceNumber		int64		`asn1:"tag:0"`
	DeviceType		ber.Enumerated	`asn1:"optional,tag:1"`
	VehicleIdentity		[]byte		`asn1:"tag:2"`
	VehicleType		int64		`asn1:"optional,tag:3"`
	VehicleUse		int64		`asn1:"optional,tag:4"`
	DetectionLane		int64		`asn1:"optional,tag:5"`
	DetectionLaneMedian	int64		`asn1:"optional,tag:6"`
	DetectionSpeed		float64		`asn1:"optional,tag:7"`
	Occupancy		int64		`asn1:"optional,tag:8"`
	ErrorState		ber.Enumerated	`asn1:"optional,tag:9"`
	IdTagInfo		[]byte		`asn1:"optional,tag:10"`
	IdUserData		[]byte		`asn1:"optional,tag:11"`
}
type IpmstscdOccNoccHistory struct {
	OccupancyTimes		int64	`asn1:"tag:0"`
	NonOccupancyTimes	int64	`asn1:"tag:1"`
}
type Time struct {
	Time_Year_qty		int64		`asn1:"optional,tag:0"`
	Time_Month_qty		int64		`asn1:"optional,tag:1"`
	Time_Day_qty		int64		`asn1:"optional,tag:2"`
	Time_Hour_qty		int64		`asn1:"optional,tag:3"`
	Time_Minute_qty		int64		`asn1:"optional,tag:4"`
	Time_Second_qty		int64		`asn1:"optional,tag:5"`
	Time_SecondFractions	ber.RawValue	`asn1:"tag:6"`
	Time_Timezone		struct {
		Timezone_Hour_qty	int64	`asn1:"optional,tag:0"`
		Time_Minute_qty		int64	`asn1:"optional,tag:1"`
	}	`asn1:"optional,tag:7"`
}
type IpmstscdIDTypeDetectorInformationType2 struct {
	VehicleInfo []VehicleInfoSeq
}
type VehicleInfoSeq struct {
	VehicleID	[]byte	`asn1:"tag:0"`
	IdData		[]byte	`asn1:"optional,tag:1"`
}
type IpmstscdImageTypeDetectorInformationType2 struct {
	CongestionInfo	struct {
		CongestionLength1	int64
		VehicleStartPosition1	int64
		CongestionLength2	int64
		VehicleStartPosition2	int64
	}	`asn1:"tag:0"`
	DirectionDensity	[]DirectionDensitySeq	`asn1:"tag:1"`
}
type DirectionDensitySeq struct {
	DirectionNo		int64
	Det_Status		ber.Enumerated	`asn1:"optional"`
	DirectionDensity	int64
}
type IpmstscdOccTypeDetectorInformationType2 struct {
	Det_Accmulated	[]Det_AccmulatedSeq
	Det_SerialInfo	[]Det_SerialInfoSeq
	Det_Velocity	[]Det_VelocitySeq
	Det_Info	[]byte
	IDetStatus	[]byte	`asn1:"optional"`
}
type Det_AccmulatedSeq struct {
	Det_nbr		int64
	Det_Status	ber.Enumerated	`asn1:"optional"`
	Density		int64
	Occupancy	int64
	DetPulseErr	int64
}
type Det_SerialInfoSeq struct {
	Det_nbr		int64
	Det_Status	ber.Enumerated	`asn1:"optional"`
	SerialInfo	[]byte
}
type Det_VelocitySeq struct {
	Det_nbr		int64
	VehicleType	ber.Enumerated
	Velocity	int64
}
