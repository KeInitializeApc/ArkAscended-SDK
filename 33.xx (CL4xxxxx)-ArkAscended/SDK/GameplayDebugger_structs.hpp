#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayDebuggerOverrideMode : uint8
{
	Enable                         = 0,
	Disable                        = 1,
	UseDefault                     = 2,
	EGameplayDebuggerOverrideMode_MAX = 3,
};

enum class EGameplayDebuggerShape : uint8
{
	Invalid                        = 0,
	Point                          = 1,
	Segment                        = 2,
	Box                            = 3,
	Cone                           = 4,
	Cylinder                       = 5,
	Circle                         = 6,
	Capsule                        = 7,
	Polygon                        = 8,
	Arrow                          = 9,
	EGameplayDebuggerShape_MAX     = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackHeader
struct FGameplayDebuggerDataPackHeader
{
public:
	int16                                        DataVersion;                                       // 0x0(0x2)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int16                                        SyncCounter;                                       // 0x2(0x2)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        DataSize;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        DataOffset;                                        // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsCompressed : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F43[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackRPCParams
struct FGameplayDebuggerDataPackRPCParams
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        DataPackIdx;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGameplayDebuggerDataPackHeader       Header;                                            // 0xC(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_2F45[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                Data;                                              // 0x20(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerShape
struct FGameplayDebuggerShape
{
public:
	TArray<struct FVector>                       ShapeData;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Description;                                       // 0x10(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FColor                                Color;                                             // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	enum class EGameplayDebuggerShape            Type;                                              // 0x24(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_2F46[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryData
struct FGameplayDebuggerCategoryData
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FString>                        TextLines;                                         // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FGameplayDebuggerShape>        Shapes;                                            // 0x18(0x10)(Edit, ExportObject, Net, Parm, Config, EditConst, SubobjectReference)
	TArray<struct FGameplayDebuggerDataPackHeader> DataPacks;                                         // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_2F47[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
struct FGameplayDebuggerNetPack
{
public:
	class AGameplayDebuggerCategoryReplicator*   Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FGameplayDebuggerCategoryData> SavedData;                                         // 0x8(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
struct FGameplayDebuggerDebugActor
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  ActorName;                                         // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int16                                        SyncCounter;                                       // 0x10(0x2)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F48[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerVisLogSync
struct FGameplayDebuggerVisLogSync
{
public:
	class FString                                DeviceIDs;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
struct FGameplayDebuggerInputConfig
{
public:
	class FString                                ConfigName;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FKey                                  Key;                                               // 0x10(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	uint8                                        bModShift : 1;                                     // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bModCtrl : 1;                                      // Mask: 0x2, PropSize: 0x10x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bModAlt : 1;                                       // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bModCmd : 1;                                       // Mask: 0x8, PropSize: 0x10x28(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F4A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
struct FGameplayDebuggerCategoryConfig
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        SlotIdx;                                           // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     ActiveInGame;                                      // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     ActiveInSimulate;                                  // 0x15(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     Hidden;                                            // 0x16(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_2F4B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bOverrideSlotIdx : 1;                              // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_260 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2F4C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
struct FGameplayDebuggerExtensionConfig
{
public:
	class FString                                ExtensionName;                                     // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     UseExtension;                                      // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F4E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
struct FGameplayDebuggerPlayerData
{
public:
	class UGameplayDebuggerLocalController*      Controller;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UInputComponent*                       InputComponent;                                    // 0x8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class AGameplayDebuggerCategoryReplicator*   Replicator;                                        // 0x10(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}


