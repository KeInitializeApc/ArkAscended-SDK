#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPresenceAdvertisementType : uint8
{
	None                           = 0,
	Party                          = 1,
	Session                        = 2,
	EPresenceAdvertisementType_MAX = 3,
};

enum class EEOSApiVersion : uint8
{
	V2022_10_28                    = 0,
	V2022_05_20                    = 1,
	V2022_02_11                    = 2,
	V2022_MAX                      = 3,
};

enum class EPartyJoinabilityConstraint : uint8
{
	AllowPlayersInMultipleParties  = 0,
	IgnoreInvitesIfAlreadyInParty  = 1,
	EPartyJoinabilityConstraint_MAX = 2,
};

enum class ENetworkAuthenticationMode : uint8
{
	Default                        = 0,
	IDToken                        = 1,
	Off                            = 2,
	ENetworkAuthenticationMode_MAX = 3,
};

enum class EDedicatedServersDistributionMode : uint8
{
	DevelopersOnly                 = 0,
	DevelopersAndPlayers           = 1,
	PlayersOnly                    = 2,
	EDedicatedServersDistributionMode_MAX = 3,
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

enum class EEOSUserInterface_SignInOrCreateAccount_Choice : uint8
{
	SignIn                         = 0,
	CreateAccount                  = 1,
	EEOSUserInterface_SignInOrCreateAccount_MAX = 2,
};

enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice : uint8
{
	SwitchToThisAccount            = 0,
	LinkADifferentAccount          = 1,
	CancelLinking                  = 2,
	EEOSUserInterface_SwitchToCrossPlatformAccount_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xD0 - 0x0)
// ScriptStruct OnlineSubsystemRedpointEOS.EOSUserInterface_CandidateEOSAccount
struct FEOSUserInterface_CandidateEOSAccount
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	uint8                                        Pad_2B8[0xB8];                                     // Fixing Size Of Struct > TateDumper <
};

}


