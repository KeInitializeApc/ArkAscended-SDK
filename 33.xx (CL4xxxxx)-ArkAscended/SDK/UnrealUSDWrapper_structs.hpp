#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUsdPurpose : uint8
{
	Default                        = 0,
	Proxy                          = 1,
	Render                         = 2,
	Guide                          = 4,
	EUsdPurpose_MAX                = 5,
};

enum class EUsdDefaultKind : uint8
{
	None                           = 0,
	Model                          = 1,
	Component                      = 2,
	Group                          = 4,
	Assembly                       = 8,
	Subcomponent                   = 16,
	EUsdDefaultKind_MAX            = 17,
};

enum class EUsdInitialLoadSet : uint8
{
	LoadAll                        = 0,
	LoadNone                       = 1,
	EUsdInitialLoadSet_MAX         = 2,
};

enum class EUsdInterpolationType : uint8
{
	Held                           = 0,
	Linear                         = 1,
	EUsdInterpolationType_MAX      = 2,
};

enum class EUsdRootMotionHandling : int32
{
	NoAdditionalRootMotion         = 0,
	UseMotionFromSkelRoot          = 1,
	UseMotionFromSkeleton          = 2,
	EUsdRootMotionHandling_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


