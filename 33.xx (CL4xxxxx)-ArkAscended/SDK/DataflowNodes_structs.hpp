#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x100 - 0xE8)
// ScriptStruct DataflowNodes.FloatOverrideDataflowNode
struct FFloatOverrideDataflowNode : public FDataflowNode
{
public:
	class FName                                  PropertyName;                                      // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FName                                  KeyName;                                           // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        ValueOut;                                          // 0xF8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24F1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowNodes.SelectionSetDataflowNode
struct FSelectionSetDataflowNode : public FDataflowNode
{
public:
	class FString                                Indices;                                           // 0xE8(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                IndicesOut;                                        // 0xF8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
struct FGetSkeletalMeshDataflowNode : public FDataflowNode
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetSkeletonDataflowNode
struct FGetSkeletonDataflowNode : public FDataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, DuplicateTransient)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
struct FSkeletalMeshBoneDataflowNode : public FDataflowNode
{
public:
	class FName                                  BoneName;                                          // 0xE8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	int32                                        BoneIndexOut;                                      // 0xF8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0xFC(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_24F8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
struct FSkeletalMeshReferenceTransformDataflowNode : public FDataflowNode
{
public:
	class USkeletalMesh*                         SkeletalMeshIn;                                    // 0xE8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        BoneIndexIn;                                       // 0xF0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24FB[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformOut;                                      // 0x100(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
struct FGetStaticMeshDataflowNode : public FDataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

}


