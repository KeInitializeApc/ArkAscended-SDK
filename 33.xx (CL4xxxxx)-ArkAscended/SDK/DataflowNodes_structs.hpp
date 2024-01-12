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
	class FName                                  PropertyName;                                      // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  KeyName;                                           // 0xF0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ValueOut;                                          // 0xF8(0x4)(Edit, ConstParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3105[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowNodes.SelectionSetDataflowNode
struct FSelectionSetDataflowNode : public FDataflowNode
{
public:
	class FString                                Indices;                                           // 0xE8(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                IndicesOut;                                        // 0xF8(0x10)(ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
struct FGetSkeletalMeshDataflowNode : public FDataflowNode
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xE8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetSkeletonDataflowNode
struct FGetSkeletonDataflowNode : public FDataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
struct FSkeletalMeshBoneDataflowNode : public FDataflowNode
{
public:
	class FName                                  BoneName;                                          // 0xE8(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xF0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	int32                                        BoneIndexOut;                                      // 0xF8(0x4)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0xFC(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3106[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
struct FSkeletalMeshReferenceTransformDataflowNode : public FDataflowNode
{
public:
	class USkeletalMesh*                         SkeletalMeshIn;                                    // 0xE8(0x8)(ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        BoneIndexIn;                                       // 0xF0(0x4)(Edit, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3108[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformOut;                                      // 0x100(0x60)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
struct FGetStaticMeshDataflowNode : public FDataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

}


