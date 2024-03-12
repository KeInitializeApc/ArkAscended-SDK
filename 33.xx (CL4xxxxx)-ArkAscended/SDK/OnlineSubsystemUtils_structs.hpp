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
	uint8                                        Pad_54D[0x120];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  Title;                                             // 0x10(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	class FText                                  Description;                                       // 0x28(0x18)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	class FText                                  LongDescription;                                   // 0x40(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  RegularPriceText;                                  // 0x58(0x18)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        RegularPrice;                                      // 0x70(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  PriceText;                                         // 0x78(0x18)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        NumericPrice;                                      // 0x90(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_55F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CurrencyCode;                                      // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FDateTime                             ReleaseDate;                                       // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FDateTime                             ExpirationDate;                                    // 0xB0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType;                                      // 0xB8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_561[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class FString>           DynamicFields;                                     // 0xC0(0x50)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                ItemID;                                            // 0x10(0x10)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                ItemID;                                            // 0x10(0x10)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation
{
public:
	struct FUniqueNetIdRepl                      UniqueID;                                          // 0x0(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class FString                                ValidationStr;                                     // 0x30(0x10)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Platform;                                          // 0x40(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	bool                                         bAllowCrossplay;                                   // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_56B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ElapsedTime;                                       // 0x54(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2
{
public:
	class FString                                ProductIdentifier;                                 // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsConsumable;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_56D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TransactionIdentifier;                             // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DisplayName;                                       // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	class FString                                DisplayDescription;                                // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DisplayPrice;                                      // 0x40(0x10)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RawPrice;                                          // 0x50(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_572[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CurrencyCode;                                      // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                CurrencySymbol;                                    // 0x68(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                DecimalSeparator;                                  // 0x78(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                GroupingSeparator;                                 // 0x88(0x10)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ReceiptData;                                       // 0x98(0x10)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           DynamicFields;                                     // 0xA8(0x50)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                Token;                                             // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Type;                                              // 0x20(0x10)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	TArray<uint8>                                TokenBytes;                                        // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_575[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x8(0x30)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPlayerReservation>            PartyMembers;                                      // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPlayerReservation>            RemovedPartyMembers;                               // 0x48(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct FPartyBeaconCrossplayPlatformMapping
{
public:
	class FString                                PlatformName;                                      // 0x0(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class FString                                PlatformType;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation
{
public:
	struct FUniqueNetIdRepl                      SpectatorId;                                       // 0x0(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPlayerReservation                    Spectator;                                         // 0x30(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


