#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineProxyStoreOfferDiscountType : uint8
{
	NotOnSale                      = 0,
	Percentage                     = 1,
	DiscountAmount                 = 2,
	PayAmount                      = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class EInAppPurchaseStatus : uint8
{
	Invalid                        = 0,
	Failed                         = 1,
	Deferred                       = 2,
	Canceled                       = 3,
	Purchased                      = 4,
	Restored                       = 5,
	EInAppPurchaseStatus_MAX       = 6,
};

enum class EBeaconConnectionState : uint8
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4,
};

enum class EClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ReservationRemoveMembers       = 6,
	AddOrUpdateReservation         = 7,
	EClientRequestType_MAX         = 8,
};

enum class EPartyReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX    = 16,
};

enum class ESpectatorClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ESpectatorClientRequestType_MAX = 6,
};

enum class ESpectatorReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	SpectatorLimitReached          = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x120 - 0x0)
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct FBlueprintSessionResult
{
public:
	uint8                                        Pad_2A1[0x120];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  Title;                                             // 0x10(0x18)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FText                                  LongDescription;                                   // 0x40(0x18)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  RegularPriceText;                                  // 0x58(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        RegularPrice;                                      // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2A6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  PriceText;                                         // 0x78(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        NumericPrice;                                      // 0x90(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2A8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CurrencyCode;                                      // 0x98(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FDateTime                             ReleaseDate;                                       // 0xA8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FDateTime                             ExpirationDate;                                    // 0xB0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType;                                      // 0xB8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2AA[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class FString>           DynamicFields;                                     // 0xC0(0x50)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                ItemID;                                            // 0x10(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                ItemID;                                            // 0x10(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation
{
public:
	struct FUniqueNetIdRepl                      UniqueID;                                          // 0x0(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class FString                                ValidationStr;                                     // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Platform;                                          // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bAllowCrossplay;                                   // 0x50(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ElapsedTime;                                       // 0x54(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2
{
public:
	class FString                                ProductIdentifier;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsConsumable;                                     // 0x10(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TransactionIdentifier;                             // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DisplayName;                                       // 0x20(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient)
	class FString                                DisplayDescription;                                // 0x30(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DisplayPrice;                                      // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RawPrice;                                          // 0x50(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CurrencyCode;                                      // 0x58(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                CurrencySymbol;                                    // 0x68(0x10)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                DecimalSeparator;                                  // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                GroupingSeparator;                                 // 0x88(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ReceiptData;                                       // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           DynamicFields;                                     // 0xA8(0x50)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                Token;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Type;                                              // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	TArray<uint8>                                TokenBytes;                                        // 0x30(0x10)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x8(0x30)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPlayerReservation>            PartyMembers;                                      // 0x38(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPlayerReservation>            RemovedPartyMembers;                               // 0x48(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct FPartyBeaconCrossplayPlatformMapping
{
public:
	class FString                                PlatformName;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class FString                                PlatformType;                                      // 0x10(0x10)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation
{
public:
	struct FUniqueNetIdRepl                      SpectatorId;                                       // 0x0(0x30)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPlayerReservation                    Spectator;                                         // 0x30(0x58)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


