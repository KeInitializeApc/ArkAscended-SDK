#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDedicatedServersDistributionMode : uint8
{
	DevelopersOnly                 = 0,
	DevelopersAndPlayers           = 1,
	PlayersOnly                    = 2,
	EDedicatedServersDistributionMode_MAX = 3,
};

enum class EEOSApiVersion : uint8
{
	V2023_10_27                    = 0,
	V2022_10_28                    = 1,
	V2022_05_20                    = 2,
	V2022_02_11                    = 3,
	EEOSApiVersion_MAX             = 4,
};

enum class ENetworkAuthenticationMode : uint8
{
	Default                        = 0,
	IDToken                        = 1,
	Off                            = 2,
	ENetworkAuthenticationMode_MAX = 3,
};

enum class EPartyJoinabilityConstraint : uint8
{
	AllowPlayersInMultipleParties  = 0,
	IgnoreInvitesIfAlreadyInParty  = 1,
	EPartyJoinabilityConstraint_MAX = 2,
};

enum class EPresenceAdvertisementType : uint8
{
	None                           = 0,
	Party                          = 1,
	Session                        = 2,
	EPresenceAdvertisementType_MAX = 3,
};

enum class EStatTypingRule : uint8
{
	Int32                          = 0,
	Bool                           = 1,
	FloatTruncated                 = 2,
	FloatEncoded                   = 3,
	DoubleEncoded                  = 4,
	EStatTypingRule_MAX            = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


