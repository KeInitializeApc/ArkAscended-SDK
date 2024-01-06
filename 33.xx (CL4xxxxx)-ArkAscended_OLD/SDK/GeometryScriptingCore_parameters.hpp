#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
struct UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMesh*                           ToStaticMeshAsset;                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCollisionFromMeshOptions Options;                                           // 0x10(0x30)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
struct UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params
{
public:
	class UStaticMesh*                           StaticMeshAsset;                                   // 0x0(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FGeometryScriptSetSimpleCollisionOptions Options;                                           // 0x10(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_687[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
struct UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMeshComponent*                 ToDynamicMeshComponent;                            // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCollisionFromMeshOptions Options;                                           // 0x10(0x30)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
struct UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params
{
public:
	class UDynamicMeshComponent*                 Component;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bEmitTransaction;                                  // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_693[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6C2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ProjectionFrame;                                   // 0x20(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSweptHullOptions       Options;                                           // 0x80(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6C3[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptConvexHullOptions      Options;                                           // 0x28(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6F3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptConvexDecompositionOptions Options;                                           // 0x18(0x28)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_73A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewValue;                                          // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsValidIndex;                                     // 0x30(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_73B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_744[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             NewUV;                                             // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidIndex;                                     // 0x28(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_745[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_74F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       NewValue;                                          // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsValidIndex;                                     // 0x20(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_750[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        NewValue;                                          // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsValidIndex;                                     // 0x20(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_75C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          NewColor;                                          // 0x14(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidIndex;                                     // 0x24(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_76D[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_774[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_778[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_782[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_78B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_790[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_798[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_79F[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7A3[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Triangle;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bIsValidTriangle;                                  // 0x14(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            ReturnValue;                                       // 0x18(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7A8[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7AF[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7BD[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7E6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7FE[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_810[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x20(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_811[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_816[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_81C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_827[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
struct UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        XChannelIndex;                                     // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        YChannelIndex;                                     // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ZChannelIndex;                                     // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_836[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
struct UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x10(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ChannelIndex;                                      // 0x20(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_841[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             DuplicateList;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptUVList                 DuplicateList;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             DuplicateList;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              DuplicateList;                                     // 0x18(0x18)(ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptColorList              DuplicateList;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       VectorArray;                                       // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     UVArray;                                           // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FIntVector>                    TriangleArray;                                     // 0x10(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<double>                               ScalarArray;                                       // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                IndexArray;                                        // 0x18(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FLinearColor>                  ColorArray;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params
{
public:
	TArray<struct FVector>                       VectorArray;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params
{
public:
	TArray<struct FVector2D>                     UVArray;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptUVList                 UVList;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params
{
public:
	TArray<struct FIntVector>                    TriangleArray;                                     // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params
{
public:
	TArray<double>                               VectorArray;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x10(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params
{
public:
	TArray<int32>                                IndexArray;                                        // 0x0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              IndexList;                                         // 0x10(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptIndexType          IndexType;                                         // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_8B0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params
{
public:
	TArray<struct FLinearColor>                  ColorArray;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptColorList              ColorList;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               ClearValue;                                        // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             ClearUV;                                           // 0x10(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ClearValue;                                        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ClearValue;                                        // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_8C1[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          ClearColor;                                        // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params
{
public:
	class UStaticMesh*                           FromStaticMeshAsset;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            MaterialList;                                      // 0x10(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                MaterialIndex;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_901[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMesh*                           ToStaticMeshAsset;                                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCopyMeshToAssetOptions Options;                                           // 0x10(0x78)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshWriteLOD           TargetLod;                                         // 0x88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_911[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         ToSkeletalMeshAsset;                               // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCopyMeshToAssetOptions Options;                                           // 0x10(0x78)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshWriteLOD           TargetLod;                                         // 0x88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_92A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params
{
public:
	class UStaticMesh*                           FromStaticMeshAsset;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCopyMeshFromAssetOptions AssetOptions;                                      // 0x10(0x3)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_944[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x14(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x1C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_948[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params
{
public:
	class USkeletalMesh*                         FromSkeletalMeshAsset;                             // 0x0(0x8)(ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCopyMeshFromAssetOptions AssetOptions;                                      // 0x10(0x3)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_95F[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x14(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x1C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_961[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params
{
public:
	class UTexture2D*                            SourceTexture;                                     // 0x0(0x8)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        SourceUVLayer;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_978[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params
{
public:
	TArray<class UTexture2D*>                    MaterialIDSourceTextures;                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SourceUVLayer;                                     // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_985[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x18(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params
{
public:
	enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType;                                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptBakeCurvatureColorMode ColorMapping;                                      // 0x1(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_99F[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ColorRangeMultiplier;                              // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinRangeMultiplier;                                // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptBakeCurvatureClampMode Clamping;                                          // 0xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params
{
public:
	int32                                        OcclusionRays;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x4(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        SpreadAngle;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params
{
public:
	int32                                        OcclusionRays;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0x4(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        SpreadAngle;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BiasAngle;                                         // 0xC(0x4)(Edit, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x190 (0x190 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9CA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeTargetMeshOptions  TargetOptions;                                     // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9CD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          SourceMesh;                                        // 0x78(0x8)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            SourceTransform;                                   // 0x80(0x60)(ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeSourceMeshOptions  SourceOptions;                                     // 0xE0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeOutputType         BakeTypes;                                         // 0xF0(0x80)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeVertexOptions      BakeOptions;                                       // 0x170(0xC)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x180(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x188(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TargetLocalToWorld;                                // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeTargetMeshOptions  TargetOptions;                                     // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        SourceActors;                                      // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeRenderCaptureOptions BakeOptions;                                       // 0x88(0x28)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptRenderCaptureTextures  ReturnValue;                                       // 0xB8(0x90)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_9EC[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x130 (0x130 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeTargetMeshOptions  TargetOptions;                                     // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          SourceMesh;                                        // 0x78(0x8)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            SourceTransform;                                   // 0x80(0x60)(ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeSourceMeshOptions  SourceOptions;                                     // 0xE0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FGeometryScriptBakeTypeOptions> BakeTypes;                                         // 0xF0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBakeTextureOptions     BakeOptions;                                       // 0x100(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x118(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    ReturnValue;                                       // 0x120(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
struct UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_A29[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewPosition;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidVertex;                                    // 0x28(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2D[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
struct UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             PositionList;                                      // 0x8(0x10)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A3D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              VertexList;                                        // 0x8(0x18)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumDeleted;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A4D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bWasVertexDeleted;                                 // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A59[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleList;                                      // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumDeleted;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bWasTriangleDeleted;                               // 0xC(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A69[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumDeleted;                                        // 0x18(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A6E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	TArray<struct FTransform>                    AppendTransforms;                                  // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            ConstantTransform;                                 // 0x20(0x60)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bConstantTransformIsRelative;                      // 0x80(0x1)(BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x81(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptAppendMeshOptions      AppendOptions;                                     // 0x82(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7E[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A80[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	struct FTransform                            AppendTransform;                                   // 0x10(0x60)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        RepeatCount;                                       // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bApplyTransformToFirstInstance;                    // 0x74(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x75(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptAppendMeshOptions      AppendOptions;                                     // 0x76(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A8D[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A8E[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	struct FTransform                            AppendTransform;                                   // 0x10(0x60)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptAppendMeshOptions      AppendOptions;                                     // 0x71(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A98[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A99[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x108 (0x108 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSimpleMeshBuffers      Buffers;                                           // 0x8(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              NewTriangleIndicesList;                            // 0xD8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaterialID;                                        // 0xF0(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0xF4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xF8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x100(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             NewPositionsList;                                  // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              NewIndicesList;                                    // 0x18(0x18)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               NewPosition;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NewVertexIndex;                                    // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FIntVector                            NewTriangle;                                       // 0x8(0xC)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NewTriangleIndex;                                  // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NewTriangleGroupID;                                // 0x18(0x4)(ConstParm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptTriangleList           NewTrianglesList;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              NewIndicesList;                                    // 0x18(0x18)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NewTriangleGroupID;                                // 0x30(0x4)(ConstParm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_ADD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryScriptBoneWeight>     BoneWeights;                                       // 0x10(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidVertexID;                                  // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ADE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x24(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AE0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FGeometryScriptBoneWeight>     BoneWeights;                                       // 0x8(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x18(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasBoneWeights;                                   // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AE8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0xC(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AE9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bProfileExisted;                                   // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bReplaceExistingProfile;                           // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0xC(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_AF9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FGeometryScriptBoneWeight>     BoneWeights;                                       // 0x10(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bHasValidBoneWeights;                              // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AFA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x24(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AFB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasBoneWeights;                                   // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B04[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxBoneIndex;                                      // 0xC(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x10(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FGeometryScriptBoneWeight             BoneWeight;                                        // 0xC(0x8)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasValidBoneWeights;                              // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B0F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x18(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USkeleton*                             Skeleton;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	struct FGeometryScriptSmoothBoneWeightsOptions Options;                                           // 0x10(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x20(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelfUnionOptions   Options;                                           // 0x8(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B23[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B29[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CutFrame;                                          // 0x10(0x60)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPlaneSliceOptions  Options;                                           // 0x70(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B2B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B30[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CutFrame;                                          // 0x10(0x60)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPlaneCutOptions    Options;                                           // 0x70(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B32[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B38[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            MirrorFrame;                                       // 0x10(0x60)(ConstParm, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshMirrorOptions      Options;                                           // 0x70(0x3)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B39[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B3B[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x100 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B43[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ToolMesh;                                          // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B45[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ToolTransform;                                     // 0x80(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptBooleanOperation   Operation;                                         // 0xE0(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B46[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshBooleanOptions     Options;                                           // 0xE4(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B47[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xF0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xF8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
struct UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          OtherMesh;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeasureMeshDistanceOptions Options;                                           // 0x10(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B54[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxDistance;                                       // 0x18(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	double                                       MinDistance;                                       // 0x20(0x8)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       AverageDistance;                                   // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       RootMeanSqrDeviation;                              // 0x30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
struct UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          OtherMesh;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIsSameMeshOptions      Options;                                           // 0x10(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsSameMesh;                                       // 0x1C(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B60[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
struct UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B67[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          OtherMesh;                                         // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B68[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OtherTransform;                                    // 0x80(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsIntersecting;                                   // 0xE0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B69[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xE8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xF0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B6A[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                ComponentPolygroups;                               // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                ComponentMaterialIDs;                              // 0x18(0x10)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          StoreToSubmesh;                                    // 0x8(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleList;                                      // 0x10(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          StoreToSubmeshOut;                                 // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params
{
public:
	class UDynamicMesh*                          CopyFromMesh;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          StoreToSubmesh;                                    // 0x8(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          StoreToSubmeshOut;                                 // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAppendToExisting;                                 // 0x28(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreserveGroupIDs;                                 // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B89[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptTwistWarpOptions       Options;                                           // 0x8(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B91[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TwistOrientation;                                  // 0x20(0x60)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TwistAngle;                                        // 0x80(0x4)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TwistExtent;                                       // 0x84(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B92[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptPerlinNoiseOptions     Options;                                           // 0x18(0x30)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B9C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WarpOrientation;                                   // 0x10(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMathWarpType       WarpType;                                          // 0x70(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B9D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMathWarpOptions        Options;                                           // 0x74(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptIterativeMeshSmoothingOptions Options;                                           // 0x18(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BA3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptFlareWarpOptions       Options;                                           // 0x8(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BA8[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            FlareOrientation;                                  // 0x20(0x60)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FlarePercentX;                                     // 0x80(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FlarePercentY;                                     // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        FlareExtent;                                       // 0x88(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BAB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptDisplaceFromTextureOptions Options;                                           // 0x20(0x38)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        UVLayer;                                           // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BB4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x60(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x68(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_BB7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptBendWarpOptions        Options;                                           // 0x8(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BBD[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BendOrientation;                                   // 0x20(0x60)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BendAngle;                                         // 0x80(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BendExtent;                                        // 0x84(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_BBE[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	int32                                        MaterialID;                                        // 0xC(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidTriangle;                                  // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BC6[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PolygroupID;                                       // 0x10(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaterialID;                                        // 0x14(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidPolygroupID;                               // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BD5[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaterialID;                                        // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BDA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaterialID;                                        // 0x18(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BE2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleMaterialIDList;                            // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BEB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        FromMaterialID;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ToMaterialID;                                      // 0xC(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaterialID;                                        // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BF7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x10(0x18)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C04[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_C05[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasMaterialIDs;                                   // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C07[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0xC(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              MaterialIDList;                                    // 0x20(0x18)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              MaterialIDList;                                    // 0x8(0x18)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasMaterialIDs;                                   // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C0E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaterialID;                                        // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumDeleted;                                        // 0xC(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C15[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            SourceMaterialList;                                // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            CompactedMaterialList;                             // 0x18(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ClearValue;                                        // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_C1B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshOffsetOptions      Options;                                           // 0x8(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C22[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshBevelOptions       Options;                                           // 0x10(0xC0)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0xD0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xD8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshOffsetFacesOptions Options;                                           // 0x8(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshOffsetOptions      Options;                                           // 0x8(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshLinearExtrudeOptions Options;                                           // 0x8(0x38)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshInsetOutsetFacesOptions Options;                                           // 0x8(0x20)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshExtrudeOptions     Options;                                           // 0x8(0x28)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          NewTriangles;                                      // 0x18(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x28(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowBowtiesInOutput;                             // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C36[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshBevelSelectionMode BevelMode;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C3E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshBevelSelectionOptions BevelOptions;                                      // 0x1C(0xC)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
struct UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bUpdateNormal;                                     // 0xC(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C49[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewNormal;                                         // 0x10(0x18)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateTangents;                                   // 0x28(0x1)(BlueprintVisible, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C4A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               NewTangentX;                                       // 0x30(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               NewTangentY;                                       // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidVertex;                                    // 0x60(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMergeSplitValues;                                 // 0x61(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C4B[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x68(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_C64[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptTriangle               Normals;                                           // 0x10(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsValidTriangle;                                  // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C67[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             TangentXList;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             TangentYList;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VertexNormalList;                                  // 0x8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x8(0x2)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C76[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             TangentXList;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             TangentYList;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidTangentSet;                                // 0x28(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasVertexIDGaps;                                  // 0x29(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAverageSplitVertexValues;                         // 0x2A(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C7D[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             NormalList;                                        // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidNormalSet;                                 // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAverageSplitVertexValues;                         // 0x1A(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C81[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasTangents;                                      // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C84[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptTangentsOptions        Options;                                           // 0x8(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSplitNormalsOptions    SplitOptions;                                      // 0x8(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x1C(0x2)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C96[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
struct UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        SetPolygroupIDOut;                                 // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SetPolygroupID;                                    // 0x24(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bGenerateNewPolygroup;                             // 0x28(0x1)(Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_CB6[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
struct UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumLayers;                                         // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_CC3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PolygroupID;                                       // 0x10(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_CD1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptIndexList              TriangleIDsOut;                                    // 0x18(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TriangleID;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0x14(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_CDB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_CDC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptIndexList              PolygroupIDsOut;                                   // 0x10(0x18)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptIndexList              PolygroupIDsOut;                                   // 0x10(0x18)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
struct UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PolygroupID;                                       // 0x10(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumDeleted;                                        // 0x14(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D01[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
struct UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             FromGroupLayer;                                    // 0x8(0x8)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             ToGroupLayer;                                      // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        UVLayer;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D10[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRespectUVSeams;                                   // 0x10(0x1)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRespectHardNormals;                               // 0x11(0x1)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D2A[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       QuadAdjacencyWeight;                               // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       QuadMetricClamp;                                   // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxSearchRounds;                                   // 0x28(0x4)(Edit, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D2C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CreaseAngle;                                       // 0x10(0x4)(ConstParm, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MinGroupSize;                                      // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ClearValue;                                        // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_D42[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA9[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     VoronoiSites;                                      // 0x70(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVoronoiOptions         VoronoiOptions;                                    // 0x80(0x58)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0xD8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xE0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DAD[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DB8[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowSelfIntersections;                           // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DB9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DBA[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DF0[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x70(0x14)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MajorRadius;                                       // 0x84(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinorRadius;                                       // 0x88(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MajorSteps;                                        // 0x8C(0x4)(Edit, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MinorSteps;                                        // 0x90(0x4)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x94(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DF9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DFC[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E41[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolylineVertices;                                  // 0x70(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    SweepPath;                                         // 0x80(0x10)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                PolylineTexParamU;                                 // 0x90(0x10)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                SweepPathTexParamV;                                // 0xA0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0xB0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_E46[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartScale;                                        // 0xB4(0x4)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EndScale;                                          // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationAngleDeg;                                  // 0xBC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0xC0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xC8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E6A[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    SweepPath;                                         // 0x80(0x10)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x90(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCapped;                                           // 0x91(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_EB9[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartScale;                                        // 0x94(0x4)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EndScale;                                          // 0x98(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationAngleDeg;                                  // 0x9C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_EEC[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x80(0x14)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x94(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        Steps;                                             // 0x98(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RisePerRevolution;                                 // 0x9C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_EF7[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x70(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        StepsPhi;                                          // 0x74(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsTheta;                                        // 0x78(0x4)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x7C(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EFA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F08[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x70(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        StepsX;                                            // 0x74(0x4)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsY;                                            // 0x78(0x4)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsZ;                                            // 0x7C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x80(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_F0D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_F0E[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F2E[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       SweepPath;                                         // 0x80(0x10)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x90(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCapped;                                           // 0x91(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F31[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartScale;                                        // 0x94(0x4)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EndScale;                                          // 0x98(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F33[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_FCC[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Height;                                            // 0x80(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	int32                                        HeightSteps;                                       // 0x84(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCapped;                                           // 0x88(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x89(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_FEF[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1014[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        DimensionX;                                        // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DimensionY;                                        // 0x74(0x4)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CornerRadius;                                      // 0x78(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	int32                                        StepsWidth;                                        // 0x7C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsHeight;                                       // 0x80(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsRound;                                        // 0x84(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1022[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1031[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        DimensionX;                                        // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DimensionY;                                        // 0x74(0x4)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CornerRadius;                                      // 0x78(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	int32                                        StepsWidth;                                        // 0x7C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsHeight;                                       // 0x80(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsRound;                                        // 0x84(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1035[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_104A[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x80(0x14)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x94(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        Steps;                                             // 0x98(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_104F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1076[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector2D>                     PathVertices;                                      // 0x70(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x80(0x14)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Steps;                                             // 0x94(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCapped;                                           // 0x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_107C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_108E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        DimensionX;                                        // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DimensionY;                                        // 0x74(0x4)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsWidth;                                        // 0x78(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsHeight;                                       // 0x7C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AD[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        DimensionX;                                        // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DimensionY;                                        // 0x74(0x4)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsWidth;                                        // 0x78(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsHeight;                                       // 0x7C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10C8[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        StepWidth;                                         // 0x70(0x4)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StepHeight;                                        // 0x74(0x4)(BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StepDepth;                                         // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumSteps;                                          // 0x7C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFloating;                                         // 0x80(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10CE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_10D2[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10E6[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x70(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        AngleSteps;                                        // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SpokeSteps;                                        // 0x78(0x4)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StartAngle;                                        // 0x7C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EndAngle;                                          // 0x80(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        HoleRadius;                                        // 0x84(0x4)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_10EB[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10FA[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x70(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	float                                        Height;                                            // 0x74(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	int32                                        RadialSteps;                                       // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HeightSteps;                                       // 0x7C(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCapped;                                           // 0x80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x81(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1100[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1102[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1116[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        StepWidth;                                         // 0x70(0x4)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StepHeight;                                        // 0x74(0x4)(BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InnerRadius;                                       // 0x78(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurveAngle;                                        // 0x7C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumSteps;                                          // 0x80(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFloating;                                         // 0x84(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_111C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_111D[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_112F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        BaseRadius;                                        // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        TopRadius;                                         // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Height;                                            // 0x78(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	int32                                        RadialSteps;                                       // 0x7C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HeightSteps;                                       // 0x80(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCapped;                                           // 0x84(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x85(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1135[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1136[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1154[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x70(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	float                                        LineLength;                                        // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        HemisphereSteps;                                   // 0x78(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CircleSteps;                                       // 0x7C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x80(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1156[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1157[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1166[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        DimensionX;                                        // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DimensionY;                                        // 0x74(0x4)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DimensionZ;                                        // 0x78(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsX;                                            // 0x7C(0x4)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsY;                                            // 0x80(0x4)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StepsZ;                                            // 0x84(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x88(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_116C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
struct UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0xC(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_119D[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
struct UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0xC(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_11A2[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VertexID;                                          // 0x8(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidVertex;                                    // 0xC(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11AE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_11B4[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
struct UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidUVSet;                                     // 0xC(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUVSetIsEmpty;                                     // 0xD(0x1)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11C1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox2D                                ReturnValue;                                       // 0x10(0x28)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FLinearColor                          Color1;                                            // 0xC(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	struct FLinearColor                          Color2;                                            // 0x1C(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	struct FLinearColor                          Color3;                                            // 0x2C(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	bool                                         bTriHasValidVertexColors;                          // 0x3C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector2D                             UV1;                                               // 0x10(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV2;                                               // 0x20(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV3;                                               // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHaveValidUVs;                                     // 0x40(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11E8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Vertex1;                                           // 0x10(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector                               Vertex2;                                           // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector                               Vertex3;                                           // 0x40(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bTriHasValidElements;                              // 0xC(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1210[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptTriangle               Normals;                                           // 0x10(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptTriangle               Tangents;                                          // 0x58(0x48)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FGeometryScriptTriangle               BiTangents;                                        // 0xA0(0x48)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xE8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_1221[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Normal1;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Normal2;                                           // 0x28(0x18)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Normal3;                                           // 0x40(0x18)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriHasValidNormals;                               // 0x58(0x1)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1227[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_123F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIntVector                            ReturnValue;                                       // 0x10(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1240[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1251[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1257[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1266[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_126C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAmbiguousTopologyFound;                           // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1276[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0xC(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_127C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1285[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_128D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SurfaceArea;                                       // 0x8(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Volume;                                            // 0xC(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_12A5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  ReturnValue;                                       // 0x8(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
struct UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_12B4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
struct UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_12BC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_12C6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          DefaultColor;                                      // 0x28(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriHasValidVertexColors;                          // 0x38(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          InterpolatedColor;                                 // 0x3C(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriHasValidUVs;                                   // 0x28(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12EB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             InterpolatedUV;                                    // 0x30(0x10)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_12F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidTriangle;                                  // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InterpolatedPosition;                              // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_12FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriHasValidElements;                              // 0x28(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1301[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InterpolatedNormal;                                // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               InterpolatedTangent;                               // 0x48(0x18)(Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               InterpolatedBiTangent;                             // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x78(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        Pad_130C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTriHasValidNormals;                               // 0x28(0x1)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_130E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InterpolatedNormal;                                // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1313[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1315[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_131A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_131E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1324[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_132A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             PositionList;                                      // 0x8(0x10)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSkipGaps;                                         // 0x18(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1333[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              VertexIDList;                                      // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasVertexIDGaps;                                  // 0x20(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_133A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSkipGaps;                                         // 0x18(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasTriangleIDGaps;                                // 0x19(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1345[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasTriangleIDGaps;                                // 0x20(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_134E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
struct UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_135B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Point;                                             // 0x10(0x18)(ConstParm, Parm, ReturnParm)
	struct FVector                               Vertex1;                                           // 0x28(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector                               Vertex2;                                           // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector                               Vertex3;                                           // 0x58(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               BarycentricCoords;                                 // 0x70(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
struct UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRemeshOptions          RemeshOptions;                                     // 0x8(0x1C)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptUniformRemeshOptions   UniformOptions;                                    // 0x24(0xC)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
struct UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptWeldEdgesOptions       WeldOptions;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
struct UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMeshBowties;                                      // 0x8(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAttributeBowties;                                 // 0x9(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1390[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
struct UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptResolveTJunctionOptions ResolveOptions;                                    // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_139A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
struct UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDegenerateTriangleOptions Options;                                           // 0x8(0x20)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
struct UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRemoveSmallComponentOptions Options;                                           // 0x8(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13AE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
struct UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRemoveHiddenTrianglesOptions Options;                                           // 0x8(0x1C)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13B4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
struct UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptFillHolesOptions       FillOptions;                                       // 0x8(0x2)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13C1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumFilledHoles;                                    // 0xC(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumFailedHoleFills;                                // 0x10(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13C2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
struct UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions;                                 // 0x20(0x18)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             VertexWeights;                                     // 0x38(0x10)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    Samples;                                           // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<double>                               SampleRadii;                                       // 0x58(0x10)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleIDs;                                       // 0x68(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    Samples;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleIDs;                                       // 0x30(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions;                                 // 0x20(0x18)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    Samples;                                           // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<double>                               SampleRadii;                                       // 0x48(0x10)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              TriangleIDs;                                       // 0x58(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x70(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x78(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               PlaneOrigin;                                       // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               PlaneNormal;                                       // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x48(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bInvert;                                           // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13EB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinNumTrianglePoints;                              // 0x4C(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               SphereOrigin;                                      // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       SphereRadius;                                      // 0x30(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x38(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bInvert;                                           // 0x39(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_13FB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinNumTrianglePoints;                              // 0x3C(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          SelectionMesh;                                     // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            SelectionMeshTransform;                            // 0x20(0x60)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x80(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bInvert;                                           // 0x81(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1408[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ShellDistance;                                     // 0x88(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       WindingThreshold;                                  // 0x90(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinNumTrianglePoints;                              // 0x98(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_140B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_140C[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  Box;                                               // 0x18(0x38)(Edit, ConstParm, ExportObject, OutParm)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x50(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bInvert;                                           // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1424[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinNumTrianglePoints;                              // 0x54(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Normal;                                            // 0x18(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	double                                       MaxAngleDeg;                                       // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x38(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bInvert;                                           // 0x39(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1435[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinNumTrianglePoints;                              // 0x3C(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          NewSelection;                                      // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOnlyToConnected;                                  // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1443[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
struct UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params
{
public:
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x10(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1448[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumSelected;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
struct UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          NewSelection;                                      // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptTopologyConnectionType ConnectionType;                                    // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1452[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          NewSelection;                                      // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Iterations;                                        // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bContract;                                         // 0x2C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOnlyExpandToFaceNeighbours;                       // 0x2D(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_145F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params
{
public:
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDisable;                                          // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1464[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x18(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1470[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              IndexList;                                         // 0x18(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptIndexType          ResultListType;                                    // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptIndexType          ConvertToType;                                     // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1475[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                IndexArray;                                        // 0x18(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x28(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1483[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          FromSelection;                                     // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          ToSelection;                                       // 0x18(0x10)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  NewType;                                           // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowPartialInclusion;                            // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1497[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<int32>                                  IndexSet;                                          // 0x8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x58(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14A3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x70(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptIndexList              IndexList;                                         // 0x8(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x20(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14B0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                IndexArray;                                        // 0x8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x18(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14B7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
struct UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params
{
public:
	struct FGeometryScriptMeshSelection          SelectionA;                                        // 0x0(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          SelectionB;                                        // 0x10(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          ResultSelection;                                   // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptCombineSelectionMode CombineMode;                                       // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14BF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
struct UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  SelectionBounds;                                   // 0x18(0x38)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsEmpty;                                          // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14DF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x58(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
struct UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FGeometryScriptIndexList>      IndexLoops;                                        // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FGeometryScriptPolyPath>       PathLoops;                                         // 0x28(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumLoops;                                          // 0x38(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFoundErrors;                                      // 0x3C(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1501[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Vertexcount;                                       // 0x8(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FGeometryScriptSimplifyMeshOptions    Options;                                           // 0xC(0x7)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_151E[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleCount;                                     // 0x8(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptSimplifyMeshOptions    Options;                                           // 0xC(0x7)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_152B[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Tolerance;                                         // 0x8(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptSimplifyMeshOptions    Options;                                           // 0xC(0x7)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1537[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolygroupSimplifyOptions Options;                                           // 0x8(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x10(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPlanarSimplifyOptions  Options;                                           // 0x8(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
struct UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params
{
public:
	struct FGeometryScriptDynamicMeshBVH         ResetBVH;                                          // 0x0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
struct UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDynamicMeshBVH         UpdateBVH;                                         // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOnlyIfInvalid;                                    // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_155D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
struct UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDynamicMeshBVH         QueryBVH;                                          // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               QueryPoint;                                        // 0x28(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSpatialQueryOptions    Options;                                           // 0x40(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bIsInside;                                         // 0x4C(0x1)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptContainmentOutcomePins Outcome;                                           // 0x4D(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1567[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
struct UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDynamicMeshBVH         TestBVH;                                           // 0x8(0x20)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValid;                                          // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1575[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
struct UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDynamicMeshBVH         QueryBVH;                                          // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               RayOrigin;                                         // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               RayDirection;                                      // 0x40(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptSpatialQueryOptions    Options;                                           // 0x58(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1585[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptRayHitResult           HitResult;                                         // 0x68(0x40)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
	enum class EGeometryScriptSearchOutcomePins  Outcome;                                           // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1588[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
struct UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDynamicMeshBVH         QueryBVH;                                          // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               QueryPoint;                                        // 0x28(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSpatialQueryOptions    Options;                                           // 0x40(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1596[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptTrianglePoint          NearestResult;                                     // 0x50(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptSearchOutcomePins  Outcome;                                           // 0x88(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1597[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
struct UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptDynamicMeshBVH         OutputBVH;                                         // 0x8(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TessellationLevel;                                 // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptSelectiveTessellateOptions Options;                                           // 0x18(0x2)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15AF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TessellationLevel;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESelectiveTessellatePatternType   PatternType;                                       // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPNTessellateOptions    Options;                                           // 0x8(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TessellationLevel;                                 // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               PivotLocation;                                     // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Translation;                                       // 0x18(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Translation;                                       // 0x8(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15DF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bFixOrientationForNegativeScale;                   // 0x70(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15E8[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Scale;                                             // 0x18(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FVector                               ScaleOrigin;                                       // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Scale;                                             // 0x8(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FVector                               ScaleOrigin;                                       // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFixOrientationForNegativeScale;                   // 0x38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15F6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               RotationOrigin;                                    // 0x30(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               RotationOrigin;                                    // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1612[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Translation;                                       // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
struct UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumUVSets;                                         // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1619[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1622[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            PlaneTransform;                                    // 0x10(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1634[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CylinderTransform;                                 // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SplitAngle;                                        // 0x80(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1636[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1637[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1649[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BoxTransform;                                      // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MinIslandTriCount;                                 // 0x80(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_164B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_164D[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TriangleID;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FGeometryScriptUVTriangle             UVs;                                               // 0x10(0x30)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	bool                                         bIsValidTriangle;                                  // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeferChangeNotifications;                         // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_165E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1665[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Scale;                                             // 0x10(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FVector2D                             ScaleOrigin;                                       // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationAngle;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             RotationOrigin;                                    // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRepackUVsOptions       RepackOptions;                                     // 0xC(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_168E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptRecomputeUVsOptions    Options;                                           // 0xC(0x1C)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
struct UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	double                                       MeshArea;                                          // 0x20(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       UVArea;                                            // 0x28(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  MeshBounds;                                        // 0x30(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox2D                                UVBounds;                                          // 0x68(0x28)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidUVSet;                                     // 0x90(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFoundUnsetUVs;                                    // 0x91(0x1)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOnlyIncludeValidUVTris;                           // 0x92(0x1)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16B6[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
struct UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptUVList                 UVList;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidUVSet;                                     // 0x20(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasVertexIDGaps;                                  // 0x21(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasSplitUVs;                                      // 0x22(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16CD[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
struct UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        FromUVSet;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ToUVSet;                                           // 0xC(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
struct UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params
{
public:
	class UDynamicMesh*                          CopyFromMesh;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          CopyToUVMesh;                                      // 0x10(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToUVMeshOut;                                   // 0x18(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInvalidTopology;                                  // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidUVSet;                                     // 0x21(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
struct UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params
{
public:
	class UDynamicMesh*                          CopyFromUVMesh;                                    // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ToUVSetIndex;                                      // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_170A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          CopyToMesh;                                        // 0x10(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x18(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFoundTopologyErrors;                              // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidUVSet;                                     // 0x21(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOnlyUVPositions;                                  // 0x22(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_170D[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptXAtlasOptions          Options;                                           // 0xC(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPatchBuilderOptions    Options;                                           // 0xC(0x34)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FGeometryScriptColorFlags             Flags;                                             // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bCreateColorSeam;                                  // 0x2C(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_174A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptColorList              VertexColorList;                                   // 0x8(0x10)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FGeometryScriptColorFlags             Flags;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bClearExisting;                                    // 0x1C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1775[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptColorList              ColorList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidColorSet;                                  // 0x18(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bBlendSplitVertexValues;                           // 0x1A(0x1)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1780[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
struct UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
struct UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
struct UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSolidifyOptions        Options;                                           // 0x8(0x28)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
struct UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptMorphologyOptions      Options;                                           // 0x8(0x24)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
struct UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	TArray<struct FTransform>                    Frames;                                            // 0x8(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<double>                               FrameTimes;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSplineSamplingOptions  SamplingOptions;                                   // 0x28(0xC)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17CE[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x40(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	bool                                         bIncludeScale;                                     // 0xA0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17D1[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17E2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1813[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1823[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_182B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
struct UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Point;                                             // 0x18(0x18)(ConstParm, Parm, ReturnParm)
	int32                                        ReturnValue;                                       // 0x30(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1874[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
struct UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EGeometryScriptAxis               DropAxis;                                          // 0x18(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1884[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x20(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x60(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        NumPoints;                                         // 0x64(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x68(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params
{
public:
	struct FVector2D                             Center;                                            // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	float                                        Radius;                                            // 0x10(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        NumPoints;                                         // 0x14(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x18(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Radius;                                            // 0x60(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        NumPoints;                                         // 0x64(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        StartAngle;                                        // 0x68(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EndAngle;                                          // 0x6C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x70(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18AB[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params
{
public:
	struct FVector2D                             Center;                                            // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	float                                        Radius;                                            // 0x10(0x4)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	int32                                        NumPoints;                                         // 0x14(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        StartAngle;                                        // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        EndAngle;                                          // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x20(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptSplineSamplingOptions  SamplingOptions;                                   // 0x20(0xC)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18C3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     VertexArray;                                       // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       VertexArray;                                       // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params
{
public:
	TArray<struct FVector>                       VertexArray;                                       // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params
{
public:
	TArray<struct FVector2D>                     VertexArray;                                       // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params
{
public:
	TArray<struct FVector>                       PathVertices;                                      // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params
{
public:
	TArray<struct FVector2D>                     PathVertices;                                      // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x10(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
struct UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UMaterialInterface*>            MaterialList;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
struct UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params
{
public:
	class UDynamicMeshPool*                      ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
struct UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptCopyMeshFromComponentOptions Options;                                           // 0x10(0xC)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bTransformToWorld;                                 // 0x1C(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1937[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToWorld;                                      // 0x20(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x80(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_193A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_193D[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
struct UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params
{
public:
	class UObject*                               FromObject;                                        // 0x0(0x8)(ConstParm, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTransformToWorld;                                 // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1956[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToWorld;                                      // 0x20(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x80(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseComplexCollision;                              // 0x81(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1959[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SphereResolution;                                  // 0x84(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_195C[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
struct UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               ZAxis;                                             // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0x30(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
struct UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               ZAxis;                                             // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               TangentAxis;                                       // 0x30(0x18)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTangentIsX;                                       // 0x48(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_196D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x50(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1973[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x68(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1983[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRay                                  ReturnValue;                                       // 0x68(0x30)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1984[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1987[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPlane                                ReturnValue;                                       // 0x70(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
struct UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params
{
public:
	struct FVector                               A;                                                 // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FVector                               B;                                                 // 0x18(0x18)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FRay                                  ReturnValue;                                       // 0x30(0x30)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
struct UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Direction;                                         // 0x18(0x18)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bDirectionIsNormalized;                            // 0x30(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1994[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRay                                  ReturnValue;                                       // 0x38(0x30)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
struct UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FTransform                            Transform;                                         // 0x30(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bInvert;                                           // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_199A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRay                                  ReturnValue;                                       // 0x98(0x30)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_199B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
struct UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	double                                       StartDistance;                                     // 0x30(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       EndDistance;                                       // 0x38(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               StartPoint;                                        // 0x40(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               EndPoint;                                          // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FVector                               SphereCenter;                                      // 0x30(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       SphereRadius;                                      // 0x48(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       Distance1;                                         // 0x50(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Distance2;                                         // 0x58(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x60(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_19AF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FVector                               SegStartPoint;                                     // 0x30(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               SegEndPoint;                                       // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       RayParameter;                                      // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	struct FVector                               RayPoint;                                          // 0x68(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               SegPoint;                                          // 0x80(0x18)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
struct UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FVector                               Point;                                             // 0x30(0x18)(ConstParm, Parm, ReturnParm)
	double                                       ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	double                                       Distance;                                          // 0x30(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FPlane                                Plane;                                             // 0x30(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	double                                       HitDistance;                                       // 0x50(0x8)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_19E4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
struct UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FVector                               Point;                                             // 0x30(0x18)(ConstParm, Parm, ReturnParm)
	double                                       ReturnValue;                                       // 0x48(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FVector                               LineOrigin;                                        // 0x30(0x18)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               LineDirection;                                     // 0x48(0x18)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       RayParameter;                                      // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	struct FVector                               RayPoint;                                          // 0x68(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       LineParameter;                                     // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               LinePoint;                                         // 0x88(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FVector                               Point;                                             // 0x30(0x18)(ConstParm, Parm, ReturnParm)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
	struct FBox                                  Box;                                               // 0x30(0x38)(Edit, ConstParm, ExportObject, OutParm)
	double                                       HitDistance;                                       // 0x68(0x8)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x70(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1A15[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
struct UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FVector                               Point;                                             // 0x38(0x18)(ConstParm, Parm, ReturnParm)
	bool                                         bConsiderOnBoxAsInside;                            // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x51(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1A2C[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
struct UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FVector                               SphereCenter;                                      // 0x38(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       SphereRadius;                                      // 0x50(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1AB2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
struct UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params
{
public:
	struct FBox                                  Box1;                                              // 0x0(0x38)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  Box2;                                              // 0x38(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x70(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1AB8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
struct UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Dimensions;                                        // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FBox                                  ReturnValue;                                       // 0x30(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
struct UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Extents;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	struct FBox                                  ReturnValue;                                       // 0x30(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
struct UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	uint8                                        Pad_1ACA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FBox                                  ReturnValue;                                       // 0xA0(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1ACB[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
struct UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FVector                               ExpandBy;                                          // 0x38(0x18)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  ReturnValue;                                       // 0x50(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
struct UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	double                                       Volume;                                            // 0x38(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	double                                       SurfaceArea;                                       // 0x40(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
struct UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FVector                               Point;                                             // 0x38(0x18)(ConstParm, Parm, ReturnParm)
	double                                       ReturnValue;                                       // 0x50(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
struct UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	int32                                        FaceIndex;                                         // 0x38(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1AE6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FaceNormal;                                        // 0x40(0x18)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x58(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
struct UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	int32                                        CornerIndex;                                       // 0x38(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AE9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x40(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
struct UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FVector                               Center;                                            // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Dimensions;                                        // 0x50(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
struct UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params
{
public:
	struct FBox                                  Box1;                                              // 0x0(0x38)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  Box2;                                              // 0x38(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0x70(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
struct UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FVector                               Point;                                             // 0x38(0x18)(ConstParm, Parm, ReturnParm)
	bool                                         bIsInside;                                         // 0x50(0x1)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AFF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x58(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
struct UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params
{
public:
	struct FBox                                  Box1;                                              // 0x0(0x38)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  Box2;                                              // 0x38(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsIntersecting;                                   // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B07[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  ReturnValue;                                       // 0x78(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
struct UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                Texture;                                           // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FGeometryScriptSampleTextureOptions   SampleOptions;                                     // 0x18(0x28)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptColorList              ColorList;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
struct UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            Texture;                                           // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FGeometryScriptSampleTextureOptions   SampleOptions;                                     // 0x18(0x28)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptColorList              ColorList;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
struct UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantX;                                         // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       ConstantY;                                         // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       ConstantZ;                                         // 0x20(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               SetOnFailure;                                      // 0x10(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
struct UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x10(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
struct UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
struct UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantA;                                         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantB;                                         // 0x28(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
struct UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantA;                                         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantB;                                         // 0x28(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x30(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ScalarMultiplier;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ScalarMultiplier;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantMultiplier;                                // 0x20(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantMultiplier;                                // 0x20(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Numerator;                                         // 0x10(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       SetOnFailure;                                      // 0x18(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Epsilon;                                           // 0x20(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Numerator;                                         // 0x10(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       SetOnFailure;                                      // 0x18(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Epsilon;                                           // 0x20(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantA;                                         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantB;                                         // 0x28(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantA;                                         // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ConstantB;                                         // 0x28(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x30(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(OutParm, Transient, Config, EditConst)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(OutParm, Transient, Config, EditConst)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(OutParm, Transient, Config, EditConst)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(OutParm, Transient, Config, EditConst)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}

