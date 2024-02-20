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
	int16                                        DataVersion;                                       // 0x0(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int16                                        SyncCounter;                                       // 0x2(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        DataSize;                                          // 0x4(0x4)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        DataOffset;                                        // 0x8(0x4)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        bIsCompressed : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_67E[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackRPCParams
struct FGameplayDebuggerDataPackRPCParams
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        DataPackIdx;                                       // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FGameplayDebuggerDataPackHeader       Header;                                            // 0xC(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_680[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                Data;                                              // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerShape
struct FGameplayDebuggerShape
{
public:
	TArray<struct FVector>                       ShapeData;                                         // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FString                                Description;                                       // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	struct FColor                                Color;                                             // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	enum class EGameplayDebuggerShape            Type;                                              // 0x24(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_683[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryData
struct FGameplayDebuggerCategoryData
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	TArray<class FString>                        TextLines;                                         // 0x8(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FGameplayDebuggerShape>        Shapes;                                            // 0x18(0x10)(Edit, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<struct FGameplayDebuggerDataPackHeader> DataPacks;                                         // 0x28(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0x38(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_68B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
struct FGameplayDebuggerNetPack
{
public:
	class AGameplayDebuggerCategoryReplicator*   Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FGameplayDebuggerCategoryData> SavedData;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
struct FGameplayDebuggerDebugActor
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  ActorName;                                         // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int16                                        SyncCounter;                                       // 0x10(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_694[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerVisLogSync
struct FGameplayDebuggerVisLogSync
{
public:
	class FString                                DeviceIDs;                                         // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
struct FGameplayDebuggerInputConfig
{
public:
	class FString                                ConfigName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FKey                                  Key;                                               // 0x10(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        bModShift : 1;                                     // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        bModCtrl : 1;                                      // Mask: 0x2, PropSize: 0x10x28(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        bModAlt : 1;                                       // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        bModCmd : 1;                                       // Mask: 0x8, PropSize: 0x10x28(0x1)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_697[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
struct FGameplayDebuggerCategoryConfig
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        SlotIdx;                                           // 0x10(0x4)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     ActiveInGame;                                      // 0x14(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     ActiveInSimulate;                                  // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     Hidden;                                            // 0x16(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_698[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bOverrideSlotIdx : 1;                              // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        BitPad_4F : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_69A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x20(0x10)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
struct FGameplayDebuggerExtensionConfig
{
public:
	class FString                                ExtensionName;                                     // 0x0(0x10)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EGameplayDebuggerOverrideMode     UseExtension;                                      // 0x10(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_69D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x18(0x10)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
struct FGameplayDebuggerPlayerData
{
public:
	class UGameplayDebuggerLocalController*      Controller;                                        // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UInputComponent*                       InputComponent;                                    // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient)
	class AGameplayDebuggerCategoryReplicator*   Replicator;                                        // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

}


