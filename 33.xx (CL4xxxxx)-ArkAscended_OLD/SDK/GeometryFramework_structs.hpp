#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDynamicMeshComponentTangentsMode : uint8
{
	NoTangents                     = 0,
	AutoCalculated                 = 1,
	ExternallyProvided             = 2,
	EDynamicMeshComponentTangentsMode_MAX = 3,
};

enum class EDynamicMeshComponentColorOverrideMode : uint8
{
	None                           = 0,
	VertexColors                   = 1,
	Polygroups                     = 2,
	Constant                       = 3,
	EDynamicMeshComponentColorOverrideMode_MAX = 4,
};

enum class EDynamicMeshComponentRenderUpdateMode : uint8
{
	NoUpdate                       = 0,
	FullUpdate                     = 1,
	FastUpdate                     = 2,
	EDynamicMeshComponentRenderUpdateMode_MAX = 3,
};

enum class EDynamicMeshChangeType : uint8
{
	GeneralEdit                    = 0,
	MeshChange                     = 1,
	MeshReplacementChange          = 2,
	MeshVertexChange               = 3,
	DeformationEdit                = 4,
	AttributeEdit                  = 5,
	EDynamicMeshChangeType_MAX     = 6,
};

enum class EDynamicMeshAttributeChangeFlags : uint8
{
	Unknown                        = 0,
	MeshTopology                   = 1,
	VertexPositions                = 2,
	NormalsTangents                = 4,
	VertexColors                   = 8,
	UVs                            = 16,
	TriangleGroups                 = 32,
	EDynamicMeshAttributeChangeFlags_MAX = 33,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryFramework.DynamicMeshChangeInfo
struct FDynamicMeshChangeInfo
{
public:
	enum class EDynamicMeshChangeType            Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	enum class EDynamicMeshAttributeChangeFlags  Flags;                                             // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsRevertChange;                                   // 0x2(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_929[0x1D];                                     // Fixing Size Of Struct > TateDumper <
};

}


