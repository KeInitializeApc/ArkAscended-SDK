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

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GeometryCache.TrackRenderData
struct FTrackRenderData
{
public:
	uint8                                        Pad_26B[0xC0];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
struct FGeometryCacheMeshBatchInfo
{
public:
	uint8                                        Pad_26C[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x9 (0x9 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheVertexInfo
struct FGeometryCacheVertexInfo
{
public:
	uint8                                        Pad_26D[0x9];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshData
struct FGeometryCacheMeshData
{
public:
	uint8                                        Pad_26F[0xC8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
struct FNiagaraGeometryCacheReference
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FNiagaraUserParameterBinding          GeometryCacheUserParamBinding;                     // 0x8(0x20)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

}


