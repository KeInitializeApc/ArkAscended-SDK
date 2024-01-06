#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENetworkFailure : uint8
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	TotalConversionIDMismatch      = 11,
	ModMisMatch                    = 12,
	ModDLCNotInstalled             = 13,
	BuildIdMismatch                = 14,
	InvalidServerPassword          = 15,
	ENetworkFailure_MAX            = 16,
};

enum class ENetCloseResult : uint8
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	SecurityMalformedPacket        = 11,
	SecurityInvalidData            = 12,
	SecurityClosed                 = 13,
	Unknown                        = 14,
	Success                        = 15,
	Extended                       = 16,
	HostClosedConnection           = 17,
	Disconnect                     = 18,
	Upgrade                        = 19,
	PreLoginFailure                = 20,
	JoinFailure                    = 21,
	JoinSplitFailure               = 22,
	AddressResolutionFailed        = 23,
	RPCDoS                         = 24,
	Cleanup                        = 25,
	MissingLevelPackage            = 26,
	PacketHandlerIncomingError     = 27,
	ZeroLastByte                   = 28,
	ZeroSize                       = 29,
	ReadHeaderFail                 = 30,
	ReadHeaderExtraFail            = 31,
	AckSequenceMismatch            = 32,
	BunchBadChannelIndex           = 33,
	BunchChannelNameFail           = 34,
	BunchWrongChannelType          = 35,
	BunchHeaderOverflow            = 36,
	BunchDataOverflow              = 37,
	BunchServerPackageMapExports   = 38,
	BunchPrematureControlChannel   = 39,
	BunchPrematureChannel          = 40,
	BunchPrematureControlClose     = 41,
	UnknownChannelType             = 42,
	PrematureSend                  = 43,
	CorruptData                    = 44,
	SocketSendFailure              = 45,
	BadChildConnectionIndex        = 46,
	LogLimitInstant                = 47,
	LogLimitSustained              = 48,
	EncryptionFailure              = 49,
	EncryptionTokenMissing         = 50,
	ReceivedNetGUIDBunchFail       = 51,
	MaxReliableExceeded            = 52,
	ReceivedNextBunchFail          = 53,
	ReceivedNextBunchQueueFail     = 54,
	PartialInitialReliableDestroy  = 55,
	PartialMergeReliableDestroy    = 56,
	PartialInitialNonByteAligned   = 57,
	PartialNonByteAligned          = 58,
	PartialFinalPackageMapExports  = 59,
	PartialTooLarge                = 60,
	AlreadyOpen                    = 61,
	ReliableBeforeOpen             = 62,
	ReliableBufferOverflow         = 63,
	RPCReliableBufferOverflow      = 64,
	ControlChannelClose            = 65,
	ControlChannelEndianCheck      = 66,
	ControlChannelPlayerChannelFail = 67,
	ControlChannelMessageUnknown   = 68,
	ControlChannelMessageFail      = 69,
	ControlChannelMessagePayloadFail = 70,
	ControlChannelBunchOverflowed  = 71,
	ControlChannelQueueBunchOverflowed = 72,
	ClientHasMustBeMappedGUIDs     = 73,
	ClientSentDestructionInfo      = 74,
	UnregisteredMustBeMappedGUID   = 75,
	ObjectReplicatorReceivedBunchFail = 76,
	ContentBlockFail               = 77,
	ContentBlockHeaderRepLayoutFail = 78,
	ContentBlockHeaderIsActorFail  = 79,
	ContentBlockHeaderObjFail      = 80,
	ContentBlockHeaderPrematureEnd = 81,
	ContentBlockHeaderSubObjectActor = 82,
	ContentBlockHeaderBadParent    = 83,
	ContentBlockHeaderInvalidCreate = 84,
	ContentBlockHeaderStablyNamedFail = 85,
	ContentBlockHeaderNoSubObjectClass = 86,
	ContentBlockHeaderUObjectSubObject = 87,
	ContentBlockHeaderAActorSubObject = 88,
	ContentBlockHeaderFail         = 89,
	ContentBlockPayloadBitsFail    = 90,
	FieldHeaderRepIndex            = 91,
	FieldHeaderBadRepIndex         = 92,
	FieldHeaderPayloadBitsFail     = 93,
	FieldPayloadFail               = 94,
	BeaconControlFlowError         = 95,
	BeaconUnableToParsePacket      = 96,
	BeaconAuthenticationFailure    = 97,
	BeaconLoginInvalidIdError      = 98,
	BeaconLoginInvalidAuthHandlerError = 99,
	BeaconAuthError                = 100,
	BeaconSpawnClientWorldPackageNameError = 101,
	BeaconSpawnExistingActorError  = 102,
	BeaconSpawnFailureError        = 103,
	BeaconSpawnNetGUIDAckNoActor   = 104,
	BeaconSpawnNetGUIDAckNoHost    = 105,
	BeaconSpawnUnexpectedError     = 106,
	FaultDisconnect                = 107,
	NotRecoverable                 = 108,
	ENetCloseResult_MAX            = 109,
};

enum class EFastArraySerializerDeltaFlags : uint8
{
	None                           = 0,
	HasBeenSerialized              = 1,
	HasDeltaBeenRequested          = 2,
	IsUsingDeltaSerialization      = 4,
	EFastArraySerializerDeltaFlags_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct NetCore.NetAnalyticsDataConfig
struct FNetAnalyticsDataConfig
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bEnabled;                                          // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_21DB[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NetCore.StateStruct
struct FStateStruct
{
public:
	uint8                                        Pad_21DC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                StateName;                                         // 0x8(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct NetCore.EscalationState
struct FEscalationState : public FStateStruct
{
public:
	bool                                         bLogEscalate;                                      // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, EditConst, GlobalConfig)
	bool                                         bDormant;                                          // 0x19(0x1)(Edit, ConstParm, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int16                                        CooloffTime;                                       // 0x1A(0x2)(ConstParm, BlueprintVisible, Parm, Transient, EditConst, GlobalConfig)
	int16                                        AutoEscalateTime;                                  // 0x1C(0x2)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, GlobalConfig)
	int8                                         HighestTimePeriod;                                 // 0x1E(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21E1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int8>                                 AllTimePeriods;                                    // 0x20(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct NetCore.NetFaultState
struct FNetFaultState : public FEscalationState
{
public:
	bool                                         bCloseConnection;                                  // 0x30(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21E5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int16                                        EscalateQuotaFaultsPerPeriod;                      // 0x32(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int8                                         EscalateQuotaFaultPercentPerPeriod;                // 0x34(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21E7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int16                                        DescalateQuotaFaultsPerPeriod;                     // 0x36(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int8                                         DescalateQuotaFaultPercentPerPeriod;               // 0x38(0x1)(ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int8                                         EscalateQuotaTimePeriod;                           // 0x39(0x1)(Edit, BlueprintReadOnly, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_21E9[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct NetCore.FastArraySerializerItem
struct FFastArraySerializerItem
{
public:
	int32                                        ReplicationID;                                     // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ReplicationKey;                                    // 0x4(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MostRecentArrayReplicationKey;                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct NetCore.FastArraySerializer
struct FFastArraySerializer
{
public:
	uint8                                        Pad_21ED[0x54];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        ArrayReplicationKey;                               // 0x54(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21EE[0xA8];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EFastArraySerializerDeltaFlags    DeltaFlags;                                        // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21EF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


