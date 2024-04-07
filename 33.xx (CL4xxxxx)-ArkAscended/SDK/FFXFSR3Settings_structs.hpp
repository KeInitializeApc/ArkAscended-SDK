#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFFXFSR3QualityMode : int32
{
	NativeAA                       = 0,
	Quality                        = 1,
	Balanced                       = 2,
	Performance                    = 3,
	UltraPerformance               = 4,
	EFFXFSR3QualityMode_MAX        = 5,
};

enum class EFFXFSR3HistoryFormat : int32
{
	FloatRGBA                      = 0,
	FloatR11G11B10                 = 1,
	EFFXFSR3HistoryFormat_MAX      = 2,
};

enum class EFFXFSR3DeDitherMode : int32
{
	Off                            = 0,
	Full                           = 1,
	HairOnly                       = 2,
	EFFXFSR3DeDitherMode_MAX       = 3,
};

enum class EFFXFSR3LandscapeHISMMode : int32
{
	Off                            = 0,
	AllStatic                      = 1,
	StaticWPO                      = 2,
	EFFXFSR3LandscapeHISMMode_MAX  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


