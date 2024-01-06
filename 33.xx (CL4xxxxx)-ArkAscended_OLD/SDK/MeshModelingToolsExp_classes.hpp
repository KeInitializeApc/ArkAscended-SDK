#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x140 - 0xA8)
// Class MeshModelingToolsExp.BakeInputMeshProperties
class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{
public:
	class UStaticMesh*                           TargetStaticMesh;                                  // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                TargetDynamicMesh;                                 // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                TargetUVLayer;                                     // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasTargetUVLayer;                                 // 0xD0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1220[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           SourceStaticMesh;                                  // 0xD8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0xE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                SourceDynamicMesh;                                 // 0xE8(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHideSourceMesh;                                   // 0xF0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1223[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SourceNormalMap;                                   // 0xF8(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SourceNormalMapUVLayer;                            // 0x100(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EBakeNormalSpace                  SourceNormalSpace;                                 // 0x110(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasSourceNormalMap;                               // 0x114(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1226[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ProjectionDistance;                                // 0x118(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectionInWorldSpace;                           // 0x11C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1228[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        TargetUVLayerNamesList;                            // 0x120(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        SourceUVLayerNamesList;                            // 0x130(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeInputMeshProperties* GetDefaultObj();

	void GetTargetUVLayerNamesFunc(TArray<class FString>* ReturnValue);
	void GetSourceUVLayerNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.BakeNormalMapToolProperties
class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UBakeNormalMapToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BakeOcclusionMapToolProperties
class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        OcclusionRays;                                     // 0xA8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxDistance;                                       // 0xAC(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        SpreadAngle;                                       // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BiasAngle;                                         // 0xB4(0x4)(Edit, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeOcclusionMapToolProperties* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.BakeCurvatureMapToolProperties
class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeCurvatureTypeMode            CurvatureType;                                     // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBakeCurvatureColorMode           ColorMapping;                                      // 0xAC(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ColorRangeMultiplier;                              // 0xB0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinRangeMultiplier;                                // 0xB4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBakeCurvatureClampMode           Clamping;                                          // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_122D[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeCurvatureMapToolProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.BakeTexture2DProperties
class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            SourceTexture;                                     // 0xA8(0x8)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                UVLayer;                                           // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        UVLayerNamesList;                                  // 0xC0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeTexture2DProperties* GetDefaultObj();

	void GetUVLayerNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x40 (0xE8 - 0xA8)
// Class MeshModelingToolsExp.BakeMultiTexture2DProperties
class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{
public:
	TArray<class UTexture2D*>                    MaterialIDSourceTextures;                          // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                UVLayer;                                           // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        UVLayerNamesList;                                  // 0xC8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    AllSourceTextures;                                 // 0xD8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeMultiTexture2DProperties* GetDefaultObj();

	void GetUVLayerNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BakeVisualizationProperties
class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreviewAsMaterial;                                // 0xA8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1239[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Brightness;                                        // 0xAC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        AOMultiplier;                                      // 0xB0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_123A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeVisualizationProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UExtrudeMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EExtrudeMeshSelectionInteractionMode InputMode;                                         // 0xA8(0x1)(BlueprintVisible, Net, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_123E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ExtrudeDistance;                                   // 0xB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EExtrudeMeshSelectionRegionModifierMode RegionMode;                                        // 0xB8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1241[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumSubdivisions;                                   // 0xBC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CreaseAngle;                                       // 0xC0(0x8)(ConstParm, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       RaycastMaxDistance;                                // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShellsToSolids;                                   // 0xD0(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInferGroupsFromNbrs;                              // 0xD1(0x1)(Edit, ExportObject, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGroupPerSubdivision;                              // 0xD2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReplaceSelectionGroups;                           // 0xD3(0x1)(Edit, BlueprintReadOnly, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1244[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UVScale;                                           // 0xD8(0x8)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUVIslandPerGroup;                                 // 0xE0(0x1)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInferMaterialID;                                  // 0xE1(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1248[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SetMaterialID;                                     // 0xE4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowInputMaterials;                               // 0xE8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1249[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UExtrudeMeshSelectionToolProperties* GetDefaultObj();

};

// 0x748 (0x858 - 0x110)
// Class MeshModelingToolsExp.ExtrudeMeshSelectionTool
class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
{
public:
	class UExtrudeMeshSelectionToolProperties*   ExtrudeProperties;                                 // 0x110(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1253[0x720];                                   // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          SourcePreview;                                     // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   EditCompute;                                       // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x848(0x8)(Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x850(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class UExtrudeMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.MeshSculptBrushOpProps
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSculptBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BaseKelvinletBrushOpProps
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Stiffness;                                         // 0xA8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Incompressiblity;                                  // 0xAC(0x4)(ConstParm, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        BrushSteps;                                        // 0xB0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_125F[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBaseKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.ScaleKelvinletBrushOpProps
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Strength;                                          // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xBC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UScaleKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.PullKelvinletBrushOpProps
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Falloff;                                           // 0xB8(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xBC(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)

	static class UClass* StaticClass();
	static class UPullKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Falloff;                                           // 0xB8(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xBC(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)

	static class UClass* StaticClass();
	static class USharpPullKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.TwistKelvinletBrushOpProps
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Strength;                                          // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xBC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTwistKelvinletBrushOpProps* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.GroupEraseBrushOpProps
class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	int32                                        Group;                                             // 0xA8(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bOnlyEraseCurrent;                                 // 0xAC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_126D[0x43];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroupEraseBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.GroupPaintBrushOpProps
class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	int32                                        Group;                                             // 0xA8(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bOnlyPaintUngrouped;                               // 0xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_126F[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroupPaintBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.InflateBrushOpProps
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UInflateBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.MoveBrushOpProps
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xB0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	struct FModelingToolsAxisFilter              AxisFilters;                                       // 0xB4(0x3)(Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1275[0x1];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoveBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PinchBrushOpProps
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xB0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	bool                                         bPerpDamping;                                      // 0xB4(0x1)(Edit, ConstParm, BlueprintVisible, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_127A[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPinchBrushOpProps* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.BasePlaneBrushOpProps
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
public:

	static class UClass* StaticClass();
	static class UBasePlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PlaneBrushOpProps
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xB0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1281[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xB0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1288[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UViewAlignedPlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.FixedPlaneBrushOpProps
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xB0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_128F[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFixedPlaneBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.StandardSculptBrushOpProps
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStandardSculptBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UViewAlignedSculptBrushOpProps* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.SculptMaxBrushOpProps
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        MaxHeight;                                         // 0xB0(0x4)(BlueprintVisible, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseFixedHeight;                                   // 0xB4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1299[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FixedHeight;                                       // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_129A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USculptMaxBrushOpProps* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.BaseSmoothBrushOpProps
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
public:

	static class UClass* StaticClass();
	static class UBaseSmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SmoothBrushOpProps
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(ConstParm, ExportObject, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SecondarySmoothBrushOpProps
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(ConstParm, ExportObject, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A1[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USecondarySmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SmoothFillBrushOpProps
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(ConstParm, ExportObject, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USmoothFillBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.FlattenBrushOpProps
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        Depth;                                             // 0xB0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A8[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFlattenBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.EraseBrushOpProps
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Falloff;                                           // 0xAC(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UEraseBrushOpProps* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UOffsetMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.OffsetMeshSelectionToolProperties
class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       OffsetDistance;                                    // 0xA8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EOffsetMeshSelectionDirectionMode Direction;                                         // 0xB0(0x1)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_12B2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumSubdivisions;                                   // 0xB4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       CreaseAngle;                                       // 0xB8(0x8)(ConstParm, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShellsToSolids;                                   // 0xC0(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInferGroupsFromNbrs;                              // 0xC1(0x1)(Edit, ExportObject, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGroupPerSubdivision;                              // 0xC2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReplaceSelectionGroups;                           // 0xC3(0x1)(Edit, BlueprintReadOnly, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UVScale;                                           // 0xC8(0x8)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUVIslandPerGroup;                                 // 0xD0(0x1)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInferMaterialID;                                  // 0xD1(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12B8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SetMaterialID;                                     // 0xD4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowInputMaterials;                               // 0xD8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12BA[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOffsetMeshSelectionToolProperties* GetDefaultObj();

};

// 0x738 (0x848 - 0x110)
// Class MeshModelingToolsExp.OffsetMeshSelectionTool
class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
{
public:
	class UOffsetMeshSelectionToolProperties*    OffsetProperties;                                  // 0x110(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12BF[0x720];                                   // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          SourcePreview;                                     // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   EditCompute;                                       // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOffsetMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.PatternToolBuilder
class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPatternToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.PatternToolSettings
class UPatternToolSettings : public UInteractiveToolPropertySet
{
public:
	int32                                        Seed;                                              // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bProjectElementsDown;                              // 0xAC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12C4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ProjectionOffset;                                  // 0xB0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHideSources;                                      // 0xB4(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseRelativeTransforms;                            // 0xB5(0x1)(EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPatternToolShape                 Shape;                                             // 0xB6(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	enum class EPatternToolSingleAxis            SingleAxis;                                        // 0xB7(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPatternToolSinglePlane           SinglePlane;                                       // 0xB8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CB[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPatternToolSettings* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_BoundingBoxSettings
class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bIgnoreTransforms;                                 // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12CF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Adjustment;                                        // 0xAC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bVisualize;                                        // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12D0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPatternTool_BoundingBoxSettings* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_LinearSettings
class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{
public:
	enum class EPatternToolAxisSpacingMode       SpacingMode;                                       // 0xA8(0x1)(ExportObject, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12D3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Count;                                             // 0xAC(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	double                                       StepSize;                                          // 0xB0(0x8)(Edit, ConstParm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       Extent;                                            // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCentered;                                         // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12D6[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPatternTool_LinearSettings* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_GridSettings
class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{
public:
	enum class EPatternToolAxisSpacingMode       SpacingX;                                          // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12DD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CountX;                                            // 0xAC(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       StepSizeX;                                         // 0xB0(0x8)(Edit, BlueprintVisible, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       ExtentX;                                           // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCenteredX;                                        // 0xC0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPatternToolAxisSpacingMode       SpacingY;                                          // 0xC1(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12E0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CountY;                                            // 0xC4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       StepSizeY;                                         // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       ExtentY;                                           // 0xD0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCenteredY;                                        // 0xD8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12E2[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPatternTool_GridSettings* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_RadialSettings
class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{
public:
	enum class EPatternToolAxisSpacingMode       SpacingMode;                                       // 0xA8(0x1)(ExportObject, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12EF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Count;                                             // 0xAC(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	double                                       StepSize;                                          // 0xB0(0x8)(Edit, ConstParm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       Radius;                                            // 0xB8(0x8)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	double                                       StartAngle;                                        // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       EndAngle;                                          // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       AngleShift;                                        // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOriented;                                         // 0xD8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F1[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPatternTool_RadialSettings* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_RotationSettings
class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bInterpolate;                                      // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bJitter;                                           // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              StartRotation;                                     // 0xB0(0x18)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              EndRotation;                                       // 0xC8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              Jitter;                                            // 0xE0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPatternTool_RotationSettings* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_TranslationSettings
class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bInterpolate;                                      // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bJitter;                                           // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               StartTranslation;                                  // 0xB0(0x18)(ConstParm, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               EndTranslation;                                    // 0xC8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               Jitter;                                            // 0xE0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPatternTool_TranslationSettings* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_ScaleSettings
class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bProportional;                                     // 0xA8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInterpolate;                                      // 0xA9(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bJitter;                                           // 0xAA(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12FB[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               StartScale;                                        // 0xB0(0x18)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               EndScale;                                          // 0xC8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Jitter;                                            // 0xE0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPatternTool_ScaleSettings* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_OutputSettings
class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bSeparateActors;                                   // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bConvertToDynamic;                                 // 0xA9(0x1)(BlueprintVisible, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCreateISMCs;                                      // 0xAA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHaveStaticMeshes;                                 // 0xAB(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12FD[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPatternTool_OutputSettings* GetDefaultObj();

};

// 0x3F8 (0x4B0 - 0xB8)
// Class MeshModelingToolsExp.PatternTool
class UPatternTool : public UMultiSelectionMeshEditingTool
{
public:
	class UPatternToolSettings*                  Settings;                                          // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPatternTool_BoundingBoxSettings*      BoundingBoxSettings;                               // 0xC0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPatternTool_LinearSettings*           LinearSettings;                                    // 0xC8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPatternTool_GridSettings*             GridSettings;                                      // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPatternTool_RadialSettings*           RadialSettings;                                    // 0xD8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPatternTool_RotationSettings*         RotationSettings;                                  // 0xE0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPatternTool_TranslationSettings*      TranslationSettings;                               // 0xE8(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPatternTool_ScaleSettings*            ScaleSettings;                                     // 0xF0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1303[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	class UPatternTool_OutputSettings*           OutputSettings;                                    // 0x150(0x8)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_1304[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PatternGizmoProxy;                                 // 0x1A0(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PatternGizmo;                                      // 0x1A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1305[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x1C8(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x1D0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1306[0x1E0];                                   // Fixing Size After Last Property  > TateDumper <
	TSet<class UPrimitiveComponent*>             AllComponents;                                     // 0x3B8(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1307[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	class UPreviewGeometry*                      PreviewGeometry;                                   // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UPatternTool* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshConstraintProperties
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreserveSharpEdges;                               // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshBoundaryConstraint           MeshBoundaryConstraint;                            // 0xA9(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EGroupBoundaryConstraint          GroupBoundaryConstraint;                           // 0xAA(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMaterialBoundaryConstraint       MaterialBoundaryConstraint;                        // 0xAB(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventNormalFlips;                               // 0xAC(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventTinyTriangles;                             // 0xAD(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_130B[0x2];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshConstraintProperties* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class MeshModelingToolsExp.RemeshProperties
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                        SmoothingStrength;                                 // 0xB0(0x4)(ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlips;                                            // 0xB4(0x1)(BlueprintVisible, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSplits;                                           // 0xB5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCollapses;                                        // 0xB6(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1311[0x1];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemeshProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.AddPatchToolBuilder
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UAddPatchToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.AddPatchToolProperties
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Width;                                             // 0xA8(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Rotation;                                          // 0xAC(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        Subdivisions;                                      // 0xB0(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Shift;                                             // 0xB4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAddPatchToolProperties* GetDefaultObj();

};

// 0x88 (0x128 - 0xA0)
// Class MeshModelingToolsExp.AddPatchTool
class UAddPatchTool : public USingleClickTool
{
public:
	uint8                                        Pad_1316[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UAddPatchToolProperties*               ShapeSettings;                                     // 0xA8(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xB0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1317[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAddPatchTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.AlignObjectsToolBuilder
class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UAlignObjectsToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.AlignObjectsToolProperties
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EAlignObjectsAlignTypes           AlignType;                                         // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EAlignObjectsAlignToOptions       AlignTo;                                           // 0xAC(0x4)(ExportObject, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EAlignObjectsBoxPoint             BoxPosition;                                       // 0xB0(0x4)(Edit, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlignX;                                           // 0xB4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlignY;                                           // 0xB5(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlignZ;                                           // 0xB6(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1326[0x1];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAlignObjectsToolProperties* GetDefaultObj();

};

// 0xA0 (0x158 - 0xB8)
// Class MeshModelingToolsExp.AlignObjectsTool
class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1335[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UAlignObjectsToolProperties*           AlignProps;                                        // 0xC0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1336[0x90];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAlignObjectsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolBuilder* GetDefaultObj();

};

// 0x90 (0x138 - 0xA8)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        MapTypes;                                          // 0xA8(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_133E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                MapPreview;                                        // 0xB0(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EBakeTextureResolution            Resolution;                                        // 0xC0(0x4)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBakeTextureBitDepth              BitDepth;                                          // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBakeTextureSamplesPerPixel       SamplesPerPixel;                                   // 0xC8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1382[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SampleFilterMask;                                  // 0xD0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        MapPreviewNamesList;                               // 0xD8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1383[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolProperties* GetDefaultObj();

	void GetMapPreviewNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x3D8 (0x490 - 0xB8)
// Class MeshModelingToolsExp.BakeMeshAttributeTool
class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1385[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBakeOcclusionMapToolProperties*       OcclusionSettings;                                 // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeCurvatureMapToolProperties*       CurvatureSettings;                                 // 0xC8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeTexture2DProperties*              TextureSettings;                                   // 0xD0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBakeMultiTexture2DProperties*         MultiTextureSettings;                              // 0xD8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              WorkingPreviewMaterial;                            // 0xE0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ErrorPreviewMaterial;                              // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_138C[0x3A0];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMeshAttributeTool* GetDefaultObj();

};

// 0x170 (0x600 - 0x490)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{
public:
	class UBakeVisualizationProperties*          VisualizationProps;                                // 0x490(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x498(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UMaterialInstanceDynamic*              PreviewMaterial;                                   // 0x4A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              BentNormalPreviewMaterial;                         // 0x4A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1395[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EBakeMapType, class UTexture2D*> CachedMaps;                                        // 0x500(0x50)(Edit, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1396[0x98];                                    // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            EmptyNormalMap;                                    // 0x5E8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyColorMapBlack;                                // 0x5F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyColorMapWhite;                                // 0x5F8(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolBase* GetDefaultObj();

};

// 0x70 (0x670 - 0x600)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsTool
class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
public:
	class UBakeInputMeshProperties*              InputMeshSettings;                                 // 0x600(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeMeshAttributeMapsToolProperties*  Settings;                                          // 0x608(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;                                    // 0x610(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_139B[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsTool* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{
public:
	TMap<enum class EBakeMapType, class UTexture2D*> Result;                                            // 0xA8(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsResultToolProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeMeshAttributeVertexToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeVertexOutput                 OutputMode;                                        // 0xA8(0x4)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OutputType;                                        // 0xAC(0x4)(ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        OutputTypeR;                                       // 0xB0(0x4)(BlueprintVisible, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutputTypeG;                                       // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutputTypeB;                                       // 0xB8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutputTypeA;                                       // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EBakeVertexChannel                PreviewMode;                                       // 0xC0(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSplitAtNormalSeams;                               // 0xC4(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSplitAtUVSeams;                                   // 0xC5(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13A8[0x2];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMeshAttributeVertexToolProperties* GetDefaultObj();

};

// 0x100 (0x590 - 0x490)
// Class MeshModelingToolsExp.BakeMeshAttributeVertexTool
class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{
public:
	class UBakeInputMeshProperties*              InputMeshSettings;                                 // 0x490(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeMeshAttributeVertexToolProperties* Settings;                                          // 0x498(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x4A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UMaterialInstanceDynamic*              PreviewMaterial;                                   // 0x4A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              PreviewAlphaMaterial;                              // 0x4B0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B0[0xD8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMeshAttributeVertexTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeMultiMeshAttributeMapsToolBuilder* GetDefaultObj();

};

// 0x90 (0x138 - 0xA8)
// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        MapTypes;                                          // 0xA8(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                MapPreview;                                        // 0xB0(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EBakeTextureResolution            Resolution;                                        // 0xC0(0x4)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBakeTextureBitDepth              BitDepth;                                          // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBakeTextureSamplesPerPixel       SamplesPerPixel;                                   // 0xC8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13BA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SampleFilterMask;                                  // 0xD0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        MapPreviewNamesList;                               // 0xD8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13BD[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMultiMeshAttributeMapsToolProperties* GetDefaultObj();

	void GetMapPreviewNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.BakeMultiMeshInputToolProperties
class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{
public:
	class UStaticMesh*                           TargetStaticMesh;                                  // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                TargetDynamicMesh;                                 // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                TargetUVLayer;                                     // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBakeMultiMeshDetailProperties> SourceMeshes;                                      // 0xD0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        ProjectionDistance;                                // 0xE0(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13CC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        TargetUVLayerNamesList;                            // 0xE8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeMultiMeshInputToolProperties* GetDefaultObj();

	void GetTargetUVLayerNamesFunc(TArray<class FString>* ReturnValue);
};

// 0xB0 (0x6B0 - 0x600)
// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
public:
	class UBakeMultiMeshAttributeMapsToolProperties* Settings;                                          // 0x600(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UBakeMultiMeshInputToolProperties*     InputMeshSettings;                                 // 0x608(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;                                    // 0x610(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13D7[0x98];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeMultiMeshAttributeMapsTool* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureResults
class UBakeRenderCaptureResults : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            BaseColorMap;                                      // 0xA8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            NormalMap;                                         // 0xB0(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            PackedMRSMap;                                      // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            MetallicMap;                                       // 0xC0(0x8)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            RoughnessMap;                                      // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            SpecularMap;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            EmissiveMap;                                       // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            OpacityMap;                                        // 0xE0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            SubsurfaceColorMap;                                // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeRenderCaptureResults* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeRenderCaptureToolBuilder
class UBakeRenderCaptureToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeRenderCaptureToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.RenderCaptureProperties
class URenderCaptureProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeTextureResolution            Resolution;                                        // 0xA8(0x4)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBaseColorMap;                                     // 0xAC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNormalMap;                                        // 0xAD(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPackedMRSMap;                                     // 0xAE(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMetallicMap;                                      // 0xAF(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRoughnessMap;                                     // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSpecularMap;                                      // 0xB1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEmissiveMap;                                      // 0xB2(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOpacityMap;                                       // 0xB3(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSubsurfaceColorMap;                               // 0xB4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAntiAliasing;                                     // 0xB5(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13F2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CaptureFieldOfView;                                // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        NearPlaneDist;                                     // 0xBC(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDeviceDepthMap;                                   // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13F4[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URenderCaptureProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureToolProperties
class UBakeRenderCaptureToolProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                MapPreview;                                        // 0xA8(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        MapPreviewNamesList;                               // 0xB8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EBakeTextureSamplesPerPixel       SamplesPerPixel;                                   // 0xC8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBakeTextureResolution            TextureSize;                                       // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ValidSampleDepthThreshold;                         // 0xD0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13FC[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeRenderCaptureToolProperties* GetDefaultObj();

	void GetMapPreviewNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureInputToolProperties
class UBakeRenderCaptureInputToolProperties : public UInteractiveToolPropertySet
{
public:
	class UStaticMesh*                           TargetStaticMesh;                                  // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                TargetUVLayer;                                     // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        TargetUVLayerNamesList;                            // 0xC0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeRenderCaptureInputToolProperties* GetDefaultObj();

	void GetTargetUVLayerNamesFunc(TArray<class FString>* ReturnValue);
	void GetTargetUVLayerIndex(int32* ReturnValue);
};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureVisualizationProperties
class UBakeRenderCaptureVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreviewAsMaterial;                                // 0xA8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1404[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Brightness;                                        // 0xAC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        SSBrightness;                                      // 0xB0(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        EmissiveScale;                                     // 0xB4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBakeRenderCaptureVisualizationProperties* GetDefaultObj();

};

// 0x4A8 (0x560 - 0xB8)
// Class MeshModelingToolsExp.BakeRenderCaptureTool
class UBakeRenderCaptureTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1409[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class AActor*>                        Actors;                                            // 0xC8(0x10)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBakeRenderCaptureToolProperties*      Settings;                                          // 0xD8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class URenderCaptureProperties*              RenderCaptureProperties;                           // 0xE0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UBakeRenderCaptureInputToolProperties* InputMeshSettings;                                 // 0xE8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeRenderCaptureVisualizationProperties* VisualizationProps;                                // 0xF0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBakeRenderCaptureResults*             ResultSettings;                                    // 0xF8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_140D[0x330];                                   // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            EmptyNormalMap;                                    // 0x430(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyColorMapBlack;                                // 0x438(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyColorMapWhite;                                // 0x440(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyEmissiveMap;                                  // 0x448(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyOpacityMap;                                   // 0x450(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptySubsurfaceColorMap;                           // 0x458(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyPackedMRSMap;                                 // 0x460(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyRoughnessMap;                                 // 0x468(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptyMetallicMap;                                  // 0x470(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EmptySpecularMap;                                  // 0x478(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1412[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              WorkingPreviewMaterial;                            // 0x488(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ErrorPreviewMaterial;                              // 0x490(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              PreviewMaterialRC;                                 // 0x498(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              PreviewMaterialPackedRC;                           // 0x4A0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              PreviewMaterialRC_Subsurface;                      // 0x4A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              PreviewMaterialPackedRC_Subsurface;                // 0x4B0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x4B8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1416[0xA0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeRenderCaptureTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeTransformToolBuilder
class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeTransformToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.BakeTransformToolProperties
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bBakeRotation;                                     // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EBakeScaleMethod                  BakeScale;                                         // 0xA9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRecenterPivot;                                    // 0xAA(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowNoScale;                                     // 0xAB(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1420[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeTransformToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingToolsExp.BakeTransformTool
class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{
public:
	class UBakeTransformToolProperties*          BasicProperties;                                   // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1426[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBakeTransformTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ConvertMeshesToolBuilder
class UConvertMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UConvertMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ConvertMeshesToolProperties
class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTransferMaterials;                                // 0xA8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowTransferMaterials;                            // 0xA9(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_142C[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConvertMeshesToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingToolsExp.ConvertMeshesTool
class UConvertMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_142F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UConvertMeshesToolProperties*          BasicProperties;                                   // 0xC0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConvertMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ConvertToPolygonsToolBuilder
class UConvertToPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UConvertToPolygonsToolBuilder* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.ConvertToPolygonsToolProperties
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EConvertToPolygonsMode            ConversionMode;                                    // 0xA8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AngleTolerance;                                    // 0xAC(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumPoints;                                         // 0xB0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bSplitExisting;                                    // 0xB4(0x1)(ConstParm, ExportObject, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bNormalWeighted;                                   // 0xB5(0x1)(Edit, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1439[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NormalWeighting;                                   // 0xB8(0x4)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        QuadAdjacencyWeight;                               // 0xBC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        QuadMetricClamp;                                   // 0xC0(0x4)(ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        QuadSearchRounds;                                  // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRespectUVSeams;                                   // 0xC8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRespectHardNormals;                               // 0xC9(0x1)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_143C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinGroupSize;                                      // 0xCC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCalculateNormals;                                 // 0xD0(0x1)(Edit, BlueprintVisible, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowGroupColors;                                  // 0xD1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_143F[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConvertToPolygonsToolProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.OutputPolygroupLayerProperties
class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  GroupLayer;                                        // 0xA8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        OptionsList;                                       // 0xB0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowNewLayerName;                                 // 0xC0(0x1)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1444[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                NewLayerName;                                      // 0xC8(0x10)(ConstParm, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOutputPolygroupLayerProperties* GetDefaultObj();

	void GetGroupOptionsList(TArray<class FString>* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
class UConvertToPolygonsOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1445[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UConvertToPolygonsTool*                ConvertToPolygonsTool;                             // 0x30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UConvertToPolygonsOperatorFactory* GetDefaultObj();

};

// 0x58 (0x110 - 0xB8)
// Class MeshModelingToolsExp.ConvertToPolygonsTool
class UConvertToPolygonsTool : public USingleSelectionMeshEditingTool
{
public:
	class UConvertToPolygonsToolProperties*      Settings;                                          // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPolygroupLayersProperties*            CopyFromLayerProperties;                           // 0xC0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UOutputPolygroupLayerProperties*       OutputProperties;                                  // 0xC8(0x8)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   PreviewCompute;                                    // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewGeometry*                      PreviewGeometry;                                   // 0xD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1449[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConvertToPolygonsTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingToolsExp.CubeGridToolBuilder
class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                        Pad_144A[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCubeGridToolBuilder* GetDefaultObj();

};

// 0x100 (0x1A8 - 0xA8)
// Class MeshModelingToolsExp.CubeGridToolProperties
class UCubeGridToolProperties : public UInteractiveToolPropertySet
{
public:
	struct FVector                               GridFrameOrigin;                                   // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              GridFrameOrientation;                              // 0xC0(0x18)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowGizmo;                                        // 0xD8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1450[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        GridPower;                                         // 0xE8(0x1)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1451[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CurrentBlockSize;                                  // 0xF0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        BlocksPerStep;                                     // 0xF8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPowerOfTwoBlockSizes;                             // 0xFC(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1453[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BlockBaseSize;                                     // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCrosswiseDiagonal;                                // 0x108(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bKeepSideGroups;                                   // 0x109(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1455[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PlaneTolerance;                                    // 0x110(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHitUnrelatedGeometry;                             // 0x118(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHitGridGroundPlaneIfCloser;                       // 0x119(0x1)(ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1456[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ECubeGridToolFaceSelectionMode    FaceSelectionMode;                                 // 0x11C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                ToggleCornerMode;                                  // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                PushPull;                                          // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class FString                                ResizeGrid;                                        // 0x140(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                SlideSelection;                                    // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                FlipSelection;                                     // 0x160(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                GridGizmo;                                         // 0x170(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                QuickShiftGizmo;                                   // 0x180(0x10)(BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                AlignGizmo;                                        // 0x190(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInCornerMode;                                     // 0x1A0(0x1)(ConstParm, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowedToEditGrid;                                // 0x1A1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_145A[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCubeGridToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.CubeGridToolActions
class UCubeGridToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1463[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                GridSourceActor;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCubeGridToolActions* GetDefaultObj();

	void SlideForward();
	void SlideBack();
	void ResetGridFromActor();
	void Push();
	void Pull();
	void Flip();
	void CornerMode();
};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.CubeGridDuringActivityActions
class UCubeGridDuringActivityActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1466[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCubeGridDuringActivityActions* GetDefaultObj();

	void Done();
	void Cancel();
};

// 0x588 (0x620 - 0x98)
// Class MeshModelingToolsExp.CubeGridTool
class UCubeGridTool : public UInteractiveTool
{
public:
	uint8                                        Pad_146D[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               GridGizmo;                                         // 0xC0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDragAlignmentMechanic*                GridGizmoAlignmentMechanic;                        // 0xC8(0x8)(Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTransformProxy*                       GridGizmoTransformProxy;                           // 0xD0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewGeometry*                      LineSets;                                          // 0xD8(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xE0(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xE8(0x8)(Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULocalSingleClickInputBehavior*        CtrlMiddleClickBehavior;                           // 0xF0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class ULocalClickDragInputBehavior*          MiddleClickDragBehavior;                           // 0xF8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCubeGridToolProperties*               Settings;                                          // 0x100(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UCubeGridToolActions*                  ToolActions;                                       // 0x108(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCubeGridDuringActivityActions*        DuringActivityActions;                             // 0x110(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x118(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x120(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UToolTarget*                           Target;                                            // 0x128(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1471[0x180];                                   // Fixing Size After Last Property  > TateDumper <
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x2B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1472[0x368];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCubeGridTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupTopologyDeformationStrategy DeformationStrategy;                               // 0xA8(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EQuickTransformerMode             TransformMode;                                     // 0xA9(0x1)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectFaces;                                      // 0xAA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectEdges;                                      // 0xAB(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectVertices;                                   // 0xAC(0x1)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowWireframe;                                    // 0xAD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1473[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EWeightScheme                     SelectedWeightScheme;                              // 0xB0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1474[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       HandleWeight;                                      // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPostFixHandles;                                   // 0xC0(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1476[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsTransformProperties* GetDefaultObj();

};

// 0x1710 (0x1810 - 0x100)
// Class MeshModelingToolsExp.DeformMeshPolygonsTool
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	uint8                                        Pad_1479[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0x108(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x110(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	class UDeformMeshPolygonsTransformProperties* TransformProps;                                    // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_147A[0x16F0];                                  // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsTool* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshCommonProperties
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDisplaceMeshToolDisplaceType     DisplacementType;                                  // 0xA8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1491[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DisplaceIntensity;                                 // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        RandomSeed;                                        // 0xB0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EDisplaceMeshToolSubdivisionType  SubdivisionType;                                   // 0xB4(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1494[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Subdivisions;                                      // 0xB8(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  WeightMap;                                         // 0xBC(0x8)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1496[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        WeightMapsList;                                    // 0xC8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInvertWeightMap;                                  // 0xD8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowWireframe;                                    // 0xD9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDisableSizeWarning;                               // 0xDA(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1498[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDisplaceMeshCommonProperties* GetDefaultObj();

	void GetWeightMapsFunc(TArray<class FString>* ReturnValue);
};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.SelectiveTessellationProperties
class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDisplaceMeshToolTriangleSelectionType SelectionType;                                     // 0xA8(0x1)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_149C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  ActiveMaterial;                                    // 0xAC(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_149E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        MaterialIDList;                                    // 0xB8(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USelectiveTessellationProperties* GetDefaultObj();

	void GetMaterialIDsFunc(TArray<class FString>* ReturnValue);
};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshTextureMapProperties
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            DisplacementMap;                                   // 0xA8(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EDisplaceMeshToolChannelType      Channel;                                           // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_14A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DisplacementMapBaseValue;                          // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             UVScale;                                           // 0xB8(0x10)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UVOffset;                                          // 0xC8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyAdjustmentCurve;                             // 0xD8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           AdjustmentCurve;                                   // 0xE0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRecalcNormals;                                    // 0xE8(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14A9[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDisplaceMeshTextureMapProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableFilter;                                     // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14AA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FilterDirection;                                   // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        FilterWidth;                                       // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14AB[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDisplaceMeshDirectionalFilterProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
public:
	TArray<struct FPerlinLayerProperties>        PerlinLayerProperties;                             // 0xA8(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UDisplaceMeshPerlinNoiseProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshSineWaveProperties
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SineWaveFrequency;                                 // 0xA8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        SineWavePhaseShift;                                // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SineWaveDirection;                                 // 0xB0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDisplaceMeshSineWaveProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.DisplaceMeshToolBuilder
class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDisplaceMeshToolBuilder* GetDefaultObj();

};

// 0x3A8 (0x460 - 0xB8)
// Class MeshModelingToolsExp.DisplaceMeshTool
class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{
public:
	class UDisplaceMeshCommonProperties*         CommonProperties;                                  // 0xB8(0x8)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;                       // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDisplaceMeshTextureMapProperties*     TextureMapProperties;                              // 0xC8(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDisplaceMeshPerlinNoiseProperties*    NoiseProperties;                                   // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDisplaceMeshSineWaveProperties*       SineWaveProperties;                                // 0xD8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class USelectiveTessellationProperties*      SelectiveTessellationProperties;                   // 0xE0(0x8)(BlueprintVisible, Parm, Config, DisableEditOnInstance, EditConst)
	class UCurveFloat*                           ActiveContrastCurveTarget;                         // 0xE8(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B8[0x340];                                   // Fixing Size After Last Property  > TateDumper <
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0x430(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x438(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	uint8                                        Pad_14B9[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDisplaceMeshTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.DrawPolyPathToolBuilder
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDrawPolyPathToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.DrawPolyPathProperties
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolyPathWidthMode            WidthMode;                                         // 0xA8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        Width;                                             // 0xAC(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	bool                                         bRoundedCorners;                                   // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14BD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EDrawPolyPathRadiusMode           RadiusMode;                                        // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CornerRadius;                                      // 0xB8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	int32                                        RadialSlices;                                      // 0xBC(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSinglePolyGroup;                                  // 0xC0(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EDrawPolyPathExtrudeMode          ExtrudeMode;                                       // 0xC4(0x4)(ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ExtrudeHeight;                                     // 0xC8(0x4)(Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RampStartRatio;                                    // 0xCC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDrawPolyPathProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.DrawPolyPathExtrudeProperties
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolyPathExtrudeDirection     Direction;                                         // 0xA8(0x4)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_14C1[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDrawPolyPathExtrudeProperties* GetDefaultObj();

};

// 0x1E8 (0x280 - 0x98)
// Class MeshModelingToolsExp.DrawPolyPathTool
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	uint8                                        Pad_14C5[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDrawPolyPathProperties*               TransformProps;                                    // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDrawPolyPathExtrudeProperties*        ExtrudeProperties;                                 // 0xC0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xC8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C6[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x190(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C7[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x258(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x260(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x268(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x270(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C8[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDrawPolyPathTool* GetDefaultObj();

};

// 0x40 (0x2C8 - 0x288)
// Class MeshModelingToolsExp.DynamicMeshBrushTool
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                          PreviewMesh;                                       // 0x288(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_14CA[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshBrushTool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingToolsExp.DynamicMeshSculptToolBuilder
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:
	uint8                                        Pad_14CD[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshSculptToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.DynamicMeshBrushProperties
class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{
public:
	struct FBrushToolRadius                      BrushSize;                                         // 0xA8(0x14)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        BrushFalloffAmount;                                // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        Depth;                                             // 0xC0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	bool                                         bHitBackFaces;                                     // 0xC4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D0[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshBrushProperties* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.DynamicMeshBrushSculptProperties
class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsRemeshingEnabled;                               // 0xA8(0x1)(ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EDynamicMeshSculptBrushType       PrimaryBrushType;                                  // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PrimaryBrushSpeed;                                 // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(ConstParm, ExportObject, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFreezeTarget;                                     // 0xB1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SmoothBrushSpeed;                                  // 0xB4(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDetailPreservingSmooth;                           // 0xB8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D9[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshBrushSculptProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.DynamicSculptToolActions
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_14DD[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicSculptToolActions* GetDefaultObj();

	void DiscardAttributes();
};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingToolsExp.BrushRemeshProperties
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                         bEnableRemeshing;                                  // 0xB8(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14E4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TriangleSize;                                      // 0xBC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        PreserveDetail;                                    // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        Iterations;                                        // 0xC4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBrushRemeshProperties* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.FixedPlaneBrushProperties
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPropertySetEnabled;                               // 0xA8(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowGizmo;                                        // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14E7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xB0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	uint8                                        Pad_14E8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0xD0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UFixedPlaneBrushProperties* GetDefaultObj();

};

// 0xF10 (0x1010 - 0x100)
// Class MeshModelingToolsExp.DynamicMeshSculptTool
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class UDynamicMeshBrushProperties*           BrushProperties;                                   // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDynamicMeshBrushSculptProperties*     SculptProperties;                                  // 0x108(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class USculptMaxBrushProperties*             SculptMaxBrushProperties;                          // 0x110(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class UKelvinBrushProperties*                KelvinBrushProperties;                             // 0x118(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class UBrushRemeshProperties*                RemeshProperties;                                  // 0x120(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UFixedPlaneBrushProperties*            GizmoProperties;                                   // 0x128(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshEditingViewProperties*            ViewProperties;                                    // 0x130(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDynamicSculptToolActions*             SculptToolActions;                                 // 0x138(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14E9[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	class UBrushStampIndicator*                  BrushIndicator;                                    // 0x1A0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              BrushIndicatorMaterial;                            // 0x1A8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          BrushIndicatorMesh;                                // 0x1B0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UOctreeDynamicMeshComponent*           DynamicMeshComponent;                              // 0x1B8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	class UMaterialInstanceDynamic*              ActiveOverrideMaterial;                            // 0x1C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14EB[0xE28];                                   // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xFF0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xFF8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14EC[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshSculptTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.EditNormalsToolBuilder
class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditNormalsToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.EditNormalsToolProperties
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bRecomputeNormals;                                 // 0xA8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	enum class ENormalCalculationMethod          NormalCalculationMethod;                           // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFixInconsistentNormals;                           // 0xAA(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInvertNormals;                                    // 0xAB(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ESplitNormalMethod                SplitNormalMethod;                                 // 0xAC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14EE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SharpEdgeAngleThreshold;                           // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowSharpVertices;                               // 0xB4(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14EF[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditNormalsToolProperties* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.EditNormalsAdvancedProperties
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditNormalsAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.EditNormalsOperatorFactory
class UEditNormalsOperatorFactory : public UObject
{
public:
	uint8                                        Pad_14F4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UEditNormalsTool*                      Tool;                                              // 0x30(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14F5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditNormalsOperatorFactory* GetDefaultObj();

};

// 0x98 (0x150 - 0xB8)
// Class MeshModelingToolsExp.EditNormalsTool
class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{
public:
	class UEditNormalsToolProperties*            BasicProperties;                                   // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UEditNormalsAdvancedProperties*        AdvancedProperties;                                // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14FF[0x70];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditNormalsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.EditPivotToolBuilder
class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditPivotToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.EditPivotToolProperties
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapDragging;                               // 0xA8(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EEditPivotSnapDragRotationMode    RotationMode;                                      // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1504[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditPivotToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.EditPivotToolActionPropertySet
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_150A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseWorldBox;                                      // 0xB0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_150B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditPivotToolActionPropertySet* GetDefaultObj();

	void WorldOrigin();
	void Top();
	void Right();
	void Left();
	void Front();
	void Center();
	void Bottom();
	void Back();
};

// 0x178 (0x230 - 0xB8)
// Class MeshModelingToolsExp.EditPivotTool
class UEditPivotTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_150F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UEditPivotToolProperties*              TransformProps;                                    // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UEditPivotToolActionPropertySet*       EditPivotActions;                                  // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1510[0xD0];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEditPivotTarget>              ActiveGizmos;                                      // 0x1A0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x1B0(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1512[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditPivotTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.EditUVIslandsToolBuilder
class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditUVIslandsToolBuilder* GetDefaultObj();

};

// 0x3E0 (0x4E0 - 0x100)
// Class MeshModelingToolsExp.EditUVIslandsTool
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0x100(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0x110(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x118(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x120(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_151A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x130(0x8)(Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x138(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, EditConst, GlobalConfig)
	uint8                                        Pad_151D[0x3A0];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditUVIslandsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.HoleFillToolBuilder
class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UHoleFillToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.SmoothHoleFillProperties
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bConstrainToHoleInterior;                          // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1525[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RemeshingExteriorRegionWidth;                      // 0xAC(0x4)(BlueprintVisible, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        SmoothingExteriorRegionWidth;                      // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        SmoothingInteriorRegionWidth;                      // 0xB4(0x4)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        InteriorSmoothness;                                // 0xB8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1528[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FillDensityScalar;                                 // 0xC0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bProjectDuringRemesh;                              // 0xC8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_152A[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USmoothHoleFillProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.HoleFillToolProperties
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EHoleFillOpFillType               FillType;                                          // 0xA8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRemoveIsolatedTriangles;                          // 0xA9(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bQuickFillSmallHoles;                              // 0xAA(0x1)(EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_152F[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoleFillToolProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.HoleFillToolActions
class UHoleFillToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1538[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoleFillToolActions* GetDefaultObj();

	void SelectAll();
	void Clear();
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.HoleFillStatisticsProperties
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                InitialHoles;                                      // 0xA8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                SelectedHoles;                                     // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                SuccessfulFills;                                   // 0xC8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                FailedFills;                                       // 0xD8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                RemainingHoles;                                    // 0xE8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoleFillStatisticsProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.HoleFillOperatorFactory
class UHoleFillOperatorFactory : public UObject
{
public:
	uint8                                        Pad_153E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UHoleFillTool*                         FillTool;                                          // 0x30(0x8)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHoleFillOperatorFactory* GetDefaultObj();

};

// 0x188 (0x240 - 0xB8)
// Class MeshModelingToolsExp.HoleFillTool
class UHoleFillTool : public USingleSelectionMeshEditingTool
{
public:
	class USmoothHoleFillProperties*             SmoothHoleFillProperties;                          // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UHoleFillToolProperties*               Properties;                                        // 0xC0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UHoleFillToolActions*                  Actions;                                           // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UHoleFillStatisticsProperties*         Statistics;                                        // 0xD0(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBoundarySelectionMechanic*            SelectionMechanic;                                 // 0xE0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1547[0x158];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoleFillTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.LatticeDeformerToolBuilder
class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class ULatticeDeformerToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.LatticeDeformerToolProperties
class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_154E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        XAxisResolution;                                   // 0xB0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        YAxisResolution;                                   // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        ZAxisResolution;                                   // 0xB8(0x4)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        Padding;                                           // 0xBC(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ELatticeInterpolationType         InterpolationType;                                 // 0xC0(0x1)(ConstParm, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bDeformNormals;                                    // 0xC1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanChangeResolution;                              // 0xC2(0x1)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1552[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EToolContextCoordinateSystem      GizmoCoordinateSystem;                             // 0xC4(0x4)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSetPivotMode;                                     // 0xC8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSoftDeformation;                                  // 0xC9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1553[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULatticeDeformerToolProperties* GetDefaultObj();

	void Constrain();
	void ClearConstraints();
};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.LatticeDeformerOperatorFactory
class ULatticeDeformerOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1554[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class ULatticeDeformerTool*                  LatticeDeformerTool;                               // 0x30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class ULatticeDeformerOperatorFactory* GetDefaultObj();

};

// 0xA8 (0x160 - 0xB8)
// Class MeshModelingToolsExp.LatticeDeformerTool
class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1559[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	class ULatticeControlPointsMechanic*         ControlPointsMechanic;                             // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULatticeDeformerToolProperties*        Settings;                                          // 0xE0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xE8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLatticeDeformed;                                  // 0xF0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_155B[0x6F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULatticeDeformerTool* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class MeshModelingToolsExp.MeshAttributePaintToolBuilder
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:
	uint8                                        Pad_155C[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshAttributePaintToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBrushActionMode                  BrushAction;                                       // 0xA8(0x4)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_155F[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshAttributePaintBrushOperationProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.MeshAttributePaintToolProperties
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                Attribute;                                         // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_1562[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshAttributePaintToolProperties* GetDefaultObj();

	void GetAttributeNames(TArray<class FString>* ReturnValue);
};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshAttributePaintEditActions
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1568[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshAttributePaintEditActions* GetDefaultObj();

};

// 0x508 (0x7D0 - 0x2C8)
// Class MeshModelingToolsExp.MeshAttributePaintTool
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
public:
	class UMeshAttributePaintBrushOperationProperties* BrushActionProps;                                  // 0x2C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshAttributePaintToolProperties*     AttribProps;                                       // 0x2D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_156C[0x4F8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshAttributePaintTool* GetDefaultObj();

};

// 0xF8 (0x1B0 - 0xB8)
// Class MeshModelingToolsExp.MeshBoundaryToolBase
class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1572[0xE8];                                    // Fixing Size After Last Property  > TateDumper <
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x1A0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1573[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshBoundaryToolBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.MeshGroupPaintToolBuilder
class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshGroupPaintToolBuilder* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.GroupPaintBrushFilterProperties
class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshGroupPaintBrushType          PrimaryBrushType;                                  // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshGroupPaintInteractionType    SubToolType;                                       // 0xA9(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_157B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BrushSize;                                         // 0xAC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshGroupPaintBrushAreaType      BrushAreaMode;                                     // 0xB0(0x1)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHitBackFaces;                                     // 0xB1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_157E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SetGroup;                                          // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOnlySetUngrouped;                                 // 0xB8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_157F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        EraseGroup;                                        // 0xBC(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOnlyEraseCurrent;                                 // 0xC0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1582[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AngleThreshold;                                    // 0xC4(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, InstancedReference, SubobjectReference)
	bool                                         bUVSeams;                                          // 0xC8(0x1)(ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bNormalSeams;                                      // 0xC9(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshGroupPaintVisibilityType     VisibilityFilter;                                  // 0xCA(0x1)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1584[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinTriVertCount;                                   // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowHitGroup;                                     // 0xD0(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowAllGroups;                                    // 0xD1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1589[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroupPaintBrushFilterProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_158B[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshGroupPaintToolActionPropertySet* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshGroupPaintToolFreezeActions* GetDefaultObj();

	void UnfreezeAll();
	void ShrinkCurrent();
	void GrowCurrent();
	void FreezeOthers();
	void FreezeCurrent();
	void FloodFillCurrent();
	void ClearCurrent();
	void ClearAll();
};

// 0xA98 (0xB98 - 0x100)
// Class MeshModelingToolsExp.MeshSculptToolBase
class UMeshSculptToolBase : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                BrushProperties;                                   // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UWorkPlaneProperties*                  GizmoProperties;                                   // 0x108(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1593[0x120];                                   // Fixing Size After Last Property  > TateDumper <
	TMap<int32, class UMeshSculptBrushOpProps*>  BrushOpPropSets;                                   // 0x230(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1594[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<int32, class UMeshSculptBrushOpProps*>  SecondaryBrushOpPropSets;                          // 0x2D0(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1595[0x6F0];                                   // Fixing Size After Last Property  > TateDumper <
	class UMeshEditingViewProperties*            ViewProperties;                                    // 0xA10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ActiveOverrideMaterial;                            // 0xA18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBrushStampIndicator*                  BrushIndicator;                                    // 0xA20(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsVolumetricIndicator;                            // 0xA28(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1598[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              BrushIndicatorMaterial;                            // 0xA30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          BrushIndicatorMesh;                                // 0xA38(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xA40(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xA48(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_159B[0x148];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSculptToolBase* GetDefaultObj();

};

// 0x438 (0xFD0 - 0xB98)
// Class MeshModelingToolsExp.MeshGroupPaintTool
class UMeshGroupPaintTool : public UMeshSculptToolBase
{
public:
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xB98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UGroupPaintBrushFilterProperties*      FilterProperties;                                  // 0xBA0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UGroupPaintBrushOpProps*               PaintBrushOpProperties;                            // 0xBA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UGroupEraseBrushOpProps*               EraseBrushOpProperties;                            // 0xBB0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshGroupPaintToolFreezeActions*      FreezeActions;                                     // 0xBB8(0x8)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_159F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolyLassoMarqueeMechanic*             PolyLassoMechanic;                                 // 0xBC8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0xBD0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0xBD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0xBE0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A4[0x3E8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshGroupPaintTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.MeshInspectorToolBuilder
class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshInspectorToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.MeshInspectorProperties
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bWireframe;                                        // 0xA8(0x1)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bBoundaryEdges;                                    // 0xA9(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bBowtieVertices;                                   // 0xAA(0x1)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPolygonBorders;                                   // 0xAB(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUVSeams;                                          // 0xAC(0x1)(ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUVBowties;                                        // 0xAD(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bMissingUVs;                                       // 0xAE(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bNormalSeams;                                      // 0xAF(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bTangentSeams;                                     // 0xB0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bNormalVectors;                                    // 0xB1(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bTangentVectors;                                   // 0xB2(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A8[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NormalLength;                                      // 0xB4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        TangentLength;                                     // 0xB8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshInspectorToolDrawIndexMode   ShowIndices;                                       // 0xBC(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A9[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshInspectorProperties* GetDefaultObj();

};

// 0x78 (0x120 - 0xA8)
// Class MeshModelingToolsExp.MeshInspectorMaterialProperties
class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshInspectorMaterialMode        MaterialMode;                                      // 0xA8(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15B5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CheckerDensity;                                    // 0xAC(0x4)(ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0xB0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                UVChannel;                                         // 0xB8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        UVChannelNamesList;                                // 0xC8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFlatShading;                                      // 0xD8(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15BA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Color;                                             // 0xDC(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_15BC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Opacity;                                           // 0xF0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, InstancedReference)
	struct FLinearColor                          TransparentMaterialColor;                          // 0xF8(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTwoSided;                                         // 0x108(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ActiveCustomMaterial;                              // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeshInspectorMaterialProperties* GetDefaultObj();

	void GetUVChannelNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x198 (0x250 - 0xB8)
// Class MeshModelingToolsExp.MeshInspectorTool
class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshInspectorProperties*              Settings;                                          // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMeshInspectorMaterialProperties*      MaterialSettings;                                  // 0xC8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_15C3[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          PreviewMesh;                                       // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0xE8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_15C6[0x160];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshInspectorTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.MeshSelectionToolBuilder
class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshSelectionToolActionPropertySet
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_15CA[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSelectionToolActionPropertySet* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingToolsExp.MeshSelectionEditActions
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionEditActions* GetDefaultObj();

	void Shrink();
	void SelectAll();
	void OptimizeBorder();
	void LargestTriCountPart();
	void LargestAreaPart();
	void Invert();
	void Grow();
	void FloodFill();
	void ExpandToMaterials();
	void Clear();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingToolsExp.MeshSelectionMeshEditActions
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionMeshEditActions* GetDefaultObj();

	void SmoothBorder();
	void Separate();
	void FlipNormals();
	void Duplicate();
	void Disconnect();
	void Delete();
	void CreatePolygroup();
};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.MeshSelectionToolProperties
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshSelectionToolPrimaryMode     SelectionMode;                                     // 0xA8(0x4)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AngleTolerance;                                    // 0xAC(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHitBackFaces;                                     // 0xB0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowPoints;                                       // 0xB1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1618[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EMeshFacesColorMode               FaceColorMode;                                     // 0xB4(0x4)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeshSelectionToolProperties* GetDefaultObj();

};

// 0x438 (0x700 - 0x2C8)
// Class MeshModelingToolsExp.MeshSelectionTool
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	uint8                                        Pad_161C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshSelectionToolProperties*          SelectionProps;                                    // 0x2D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshSelectionEditActions*             SelectionActions;                                  // 0x2D8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshSelectionToolActionPropertySet*   EditActions;                                       // 0x2E0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMeshStatisticsProperties*             MeshStatisticsProperties;                          // 0x2E8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0x2F8(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0x300(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_161F[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	class UMeshSelectionSet*                     Selection;                                         // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        SpawnedActors;                                     // 0x368(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1620[0x388];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.MeshSpaceDeformerToolProperties
class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ENonlinearOperationType           SelectedOperationType;                             // 0xA8(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1629[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        UpperBoundsInterval;                               // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        LowerBoundsInterval;                               // 0xB0(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        BendDegrees;                                       // 0xB4(0x4)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        TwistDegrees;                                      // 0xB8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EFlareProfileType                 FlareProfileType;                                  // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_162C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FlarePercentY;                                     // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLockXAndYFlaring;                                 // 0xC4(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_162F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FlarePercentX;                                     // 0xC8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLockBottom;                                       // 0xCC(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowOriginalMesh;                                 // 0xCD(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawVisualization;                                // 0xCE(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlignToNormalOnCtrlClick;                         // 0xCF(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1635[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolActionPropertySet* GetDefaultObj();

	void ShiftToCenter();
};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.SpaceDeformerOperatorFactory
class USpaceDeformerOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1639[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshSpaceDeformerTool*                SpaceDeformerTool;                                 // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USpaceDeformerOperatorFactory* GetDefaultObj();

};

// 0x208 (0x2C0 - 0xB8)
// Class MeshModelingToolsExp.MeshSpaceDeformerTool
class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshSpaceDeformerToolProperties*      Settings;                                          // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMeshSpaceDeformerToolActionPropertySet* ToolActions;                                       // 0xC0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0xC8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xD0(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_163F[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          OriginalMeshPreview;                               // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UIntervalGizmo*                        IntervalGizmo;                                     // 0xF8(0x8)(BlueprintVisible, ExportObject, Parm, EditConst, GlobalConfig)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x100(0x8)(Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x108(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, EditConst, GlobalConfig)
	class UGizmoLocalFloatParameterSource*       UpIntervalSource;                                  // 0x110(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UGizmoLocalFloatParameterSource*       DownIntervalSource;                                // 0x118(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UGizmoLocalFloatParameterSource*       ForwardIntervalSource;                             // 0x120(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1647[0x198];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.MeshVertexSculptToolBuilder
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshVertexSculptToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.VertexBrushSculptProperties
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshVertexSculptBrushType        PrimaryBrushType;                                  // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshSculptFalloffType            PrimaryFalloffType;                                // 0xA9(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMeshVertexSculptBrushFilterType  BrushFilter;                                       // 0xAA(0x1)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFreezeTarget;                                     // 0xAB(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UMeshVertexSculptTool>  Tool;                                              // 0xAC(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_164E[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVertexBrushSculptProperties* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.VertexBrushAlphaProperties
class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            Alpha;                                             // 0xA8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAngle;                                     // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRandomize;                                        // 0xB4(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1654[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomRange;                                       // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1655[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVertexBrushAlphaProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshSymmetryProperties
class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSymmetry;                                   // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSymmetryCanBeEnabled;                             // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1659[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSymmetryProperties* GetDefaultObj();

};

// 0x948 (0x14E0 - 0xB98)
// Class MeshModelingToolsExp.MeshVertexSculptTool
class UMeshVertexSculptTool : public UMeshSculptToolBase
{
public:
	class UVertexBrushSculptProperties*          SculptProperties;                                  // 0xB98(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UVertexBrushAlphaProperties*           AlphaProperties;                                   // 0xBA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            BrushAlpha;                                        // 0xBA8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshSymmetryProperties*               SymmetryProperties;                                // 0xBB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0xBB8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0xBC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	uint8                                        Pad_1660[0x918];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshVertexSculptTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.MirrorToolBuilder
class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMirrorToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.MirrorToolProperties
class UMirrorToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMirrorOperationMode              OperationMode;                                     // 0xA8(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCropAlongMirrorPlaneFirst;                        // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bWeldVerticesOnMirrorPlane;                        // 0xAA(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1667[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PlaneTolerance;                                    // 0xB0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowBowtieVertexCreation;                        // 0xB8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMirrorCtrlClickBehavior          CtrlClickBehavior;                                 // 0xB9(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bButtonsOnlyChangeOrientation;                     // 0xBA(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowPreview;                                      // 0xBB(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EMirrorSaveMode                   SaveMode;                                          // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_166E[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMirrorToolProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.MirrorOperatorFactory
class UMirrorOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1674[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMirrorTool*                           MirrorTool;                                        // 0x30(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1675[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMirrorOperatorFactory* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MirrorToolActionPropertySet
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_167B[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMirrorToolActionPropertySet* GetDefaultObj();

	void Up();
	void ShiftToCenter();
	void Right();
	void Left();
	void Forward();
	void Down();
	void Backward();
};

// 0xB0 (0x168 - 0xB8)
// Class MeshModelingToolsExp.MirrorTool
class UMirrorTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1680[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMirrorToolProperties*                 Settings;                                          // 0xC0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMirrorToolActionPropertySet*          ToolActions;                                       // 0xC8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                    // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xE0(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1689[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x120(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_168A[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMirrorTool* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.OffsetMeshToolProperties
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOffsetMeshToolOffsetType         OffsetType;                                        // 0xA8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1691[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Distance;                                          // 0xAC(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCreateShell;                                      // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1693[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOffsetMeshToolProperties* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MeshModelingToolsExp.OffsetWeightMapSetProperties
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                        MinDistance;                                       // 0xC8(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1698[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOffsetWeightMapSetProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.IterativeOffsetProperties
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        Steps;                                             // 0xA8(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOffsetBoundaries;                                 // 0xAC(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_169A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SmoothingPerStep;                                  // 0xB0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bReprojectSmooth;                                  // 0xB4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_169B[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIterativeOffsetProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ImplicitOffsetProperties
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Smoothness;                                        // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPreserveUVs;                                      // 0xAC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_169E[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImplicitOffsetProperties* GetDefaultObj();

};

// 0x20 (0x420 - 0x400)
// Class MeshModelingToolsExp.OffsetMeshTool
class UOffsetMeshTool : public UBaseMeshProcessingTool
{
public:
	class UOffsetMeshToolProperties*             OffsetProperties;                                  // 0x400(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UIterativeOffsetProperties*            IterativeProperties;                               // 0x408(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UImplicitOffsetProperties*             ImplicitProperties;                                // 0x410(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UOffsetWeightMapSetProperties*         WeightMapProperties;                               // 0x418(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOffsetMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.OffsetMeshToolBuilder
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UOffsetMeshToolBuilder* GetDefaultObj();

};

// 0x68 (0x110 - 0xA8)
// Class MeshModelingToolsExp.PhysicsObjectToolPropertySet
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
public:
	class FString                                ObjectName;                                        // 0xA8(0x10)(Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	enum class ECollisionGeometryMode            CollisionType;                                     // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16A7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPhysicsSphereData>            Spheres;                                           // 0xC0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference)
	TArray<struct FPhysicsBoxData>               Boxes;                                             // 0xD0(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FPhysicsCapsuleData>           Capsules;                                          // 0xE0(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPhysicsConvexData>            Convexes;                                          // 0xF0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FPhysicsLevelSetData>          LevelSets;                                         // 0x100(0x10)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPhysicsObjectToolPropertySet* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.CollisionGeometryVisualizationProperties
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	float                                        LineThickness;                                     // 0xA8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bShowHidden;                                       // 0xAC(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRandomColors;                                     // 0xAD(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16B1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                Color;                                             // 0xB0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_16B2[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCollisionGeometryVisualizationProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UExtractCollisionGeometryToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ExtractCollisionToolProperties
class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EExtractCollisionOutputType       CollisionType;                                     // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bWeldEdges;                                        // 0xA9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOutputSeparateMeshes;                             // 0xAA(0x1)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowPreview;                                      // 0xAB(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowInputMesh;                                    // 0xAC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16B9[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UExtractCollisionToolProperties* GetDefaultObj();

};

// 0x278 (0x330 - 0xB8)
// Class MeshModelingToolsExp.ExtractCollisionGeometryTool
class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{
public:
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UExtractCollisionToolProperties*       Settings;                                          // 0xC0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0xC8(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPhysicsObjectToolPropertySet*         ObjectProps;                                       // 0xD0(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewGeometry*                      PreviewElements;                                   // 0xD8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_16BA[0x248];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UExtractCollisionGeometryTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.PhysicsInspectorToolBuilder
class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPhysicsInspectorToolBuilder* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class MeshModelingToolsExp.PhysicsInspectorTool
class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{
public:
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0xB8(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPhysicsObjectToolPropertySet*> ObjectData;                                        // 0xC0(0x10)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    LineMaterial;                                      // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UPreviewGeometry*>              PreviewElements;                                   // 0xD8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C4[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPhysicsInspectorTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SetCollisionGeometryToolBuilder
class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USetCollisionGeometryToolBuilder* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.SetCollisionGeometryToolProperties
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECollisionGeometryType            GeometryType;                                      // 0xA8(0x4)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ESetCollisionGeometryInputMode    InputMode;                                         // 0xAC(0x4)(BlueprintVisible, Net, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bUseWorldSpace;                                    // 0xB0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRemoveContained;                                  // 0xB1(0x1)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableMaxCount;                                   // 0xB2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16CA[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxCount;                                          // 0xB4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        MinThickness;                                      // 0xB8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDetectBoxes;                                      // 0xBC(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDetectSpheres;                                    // 0xBD(0x1)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDetectCapsules;                                   // 0xBE(0x1)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSimplifyHulls;                                    // 0xBF(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        HullTargetFaceCount;                               // 0xC0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxHullsPerMesh;                                   // 0xC4(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        ConvexDecompositionSearchFactor;                   // 0xC8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AddHullsErrorTolerance;                            // 0xCC(0x4)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MinPartThickness;                                  // 0xD0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSimplifyPolygons;                                 // 0xD4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HullTolerance;                                     // 0xD8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EProjectedHullAxis                SweepAxis;                                         // 0xDC(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        LevelSetResolution;                                // 0xE0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAppendToExisting;                                 // 0xE4(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ECollisionGeometryMode            SetCollisionType;                                  // 0xE8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D6[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USetCollisionGeometryToolProperties* GetDefaultObj();

};

// 0x198 (0x250 - 0xB8)
// Class MeshModelingToolsExp.SetCollisionGeometryTool
class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_16D9[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class USetCollisionGeometryToolProperties*   Settings;                                          // 0xC0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0xD0(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPhysicsObjectToolPropertySet*         CollisionProps;                                    // 0xD8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    LineMaterial;                                      // 0xE0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPreviewGeometry*                      PreviewGeom;                                       // 0xF0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DC[0x158];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USetCollisionGeometryTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.PlaneCutToolBuilder
class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPlaneCutToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.AcceptOutputProperties
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bExportSeparatedPiecesAsNewMeshAssets;             // 0xA8(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E1[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAcceptOutputProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PlaneCutToolProperties
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bKeepBothHalves;                                   // 0xA8(0x1)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SpacingBetweenHalves;                              // 0xAC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowPreview;                                      // 0xB0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFillCutHole;                                      // 0xB1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFillSpans;                                        // 0xB2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16EA[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneCutToolProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.PlaneCutOperatorFactory
class UPlaneCutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_16ED[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPlaneCutTool*                         CutTool;                                           // 0x30(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16EE[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneCutOperatorFactory* GetDefaultObj();

};

// 0xE8 (0x1A0 - 0xB8)
// Class MeshModelingToolsExp.PlaneCutTool
class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{
public:
	class UPlaneCutToolProperties*               BasicProperties;                                   // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAcceptOutputProperties*               AcceptProperties;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xC8(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                       // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0xE8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_16F8[0xB0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneCutTool* GetDefaultObj();

	void FlipPlane();
	void Cut();
};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ProjectToTargetToolBuilder
class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UProjectToTargetToolBuilder* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class MeshModelingToolsExp.RemeshMeshToolProperties
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int32                                        TargetTriangleCount;                               // 0xB8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERemeshSmoothingType              SmoothingType;                                     // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDiscardAttributes;                                // 0xBD(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowGroupColors;                                  // 0xBE(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ERemeshType                       RemeshType;                                        // 0xBF(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        RemeshIterations;                                  // 0xC0(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxRemeshIterations;                               // 0xC4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        ExtraProjectionIterations;                         // 0xC8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseTargetEdgeLength;                              // 0xCC(0x1)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1705[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TargetEdgeLength;                                  // 0xD0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReproject;                                        // 0xD4(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReprojectConstraints;                             // 0xD5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1708[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BoundaryCornerAngleThreshold;                      // 0xD8(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1709[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemeshMeshToolProperties* GetDefaultObj();

};

// 0x20 (0x100 - 0xE0)
// Class MeshModelingToolsExp.ProjectToTargetToolProperties
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
public:
	bool                                         bWorldSpace;                                       // 0xE0(0x1)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bParallel;                                         // 0xE1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_170F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FaceProjectionPassesPerRemeshIteration;            // 0xE4(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        SurfaceProjectionSpeed;                            // 0xE8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        NormalAlignmentSpeed;                              // 0xEC(0x4)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSmoothInFillAreas;                                // 0xF0(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1713[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FillAreaDistanceMultiplier;                        // 0xF4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        FillAreaSmoothMultiplier;                          // 0xF8(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1717[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProjectToTargetToolProperties* GetDefaultObj();

};

// 0x50 (0x108 - 0xB8)
// Class MeshModelingToolsExp.RemeshMeshTool
class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1720[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class URemeshMeshToolProperties*             BasicProperties;                                   // 0xC0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMeshStatisticsProperties*             MeshStatisticsProperties;                          // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0xD8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1726[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemeshMeshTool* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class MeshModelingToolsExp.ProjectToTargetTool
class UProjectToTargetTool : public URemeshMeshTool
{
public:
	uint8                                        Pad_1728[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProjectToTargetTool* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.MeshAnalysisProperties
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                SurfaceArea;                                       // 0xA8(0x10)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Volume;                                            // 0xB8(0x10)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UMeshAnalysisProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.MeshStatisticsProperties
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                Mesh;                                              // 0xA8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                UV;                                                // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	class FString                                Attributes;                                        // 0xC8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UMeshStatisticsProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.RemeshMeshToolBuilder
class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URemeshMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesToolBuilder* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOcclusionCalculationUIMode       OcclusionTestMethod;                               // 0xA8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EOcclusionTriangleSamplingUIMode  TriangleSampling;                                  // 0xA9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1736[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WindingIsoValue;                                   // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AddRandomRays;                                     // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        AddTriangleSamples;                                // 0xBC(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOnlySelfOcclude;                                  // 0xC0(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1738[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ShrinkRemoval;                                     // 0xC4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       MinAreaIsland;                                     // 0xC8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        MinTriCountIsland;                                 // 0xD0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EOccludedAction                   Action;                                            // 0xD4(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1739[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesToolProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_173F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1743[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class URemoveOccludedTrianglesTool*          Tool;                                              // 0x30(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1744[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesOperatorFactory* GetDefaultObj();

};

// 0x118 (0x1D0 - 0xB8)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesTool
class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{
public:
	class URemoveOccludedTrianglesToolProperties* BasicProperties;                                   // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPolygroupLayersProperties*            PolygroupLayersProperties;                         // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;                                // 0xC8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UPreviewMesh*>                  PreviewCopies;                                     // 0xE0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1750[0xE0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.RevolveBoundaryToolBuilder
class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URevolveBoundaryToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.RevolveBoundaryOperatorFactory
class URevolveBoundaryOperatorFactory : public UObject
{
public:
	uint8                                        Pad_175E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class URevolveBoundaryTool*                  RevolveBoundaryTool;                               // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class URevolveBoundaryOperatorFactory* GetDefaultObj();

};

// 0x30 (0x148 - 0x118)
// Class MeshModelingToolsExp.RevolveBoundaryToolProperties
class URevolveBoundaryToolProperties : public URevolveProperties
{
public:
	enum class ERevolvePropertiesCapFillMode     CapFillMode;                                       // 0x118(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDisplayInputMesh;                                 // 0x119(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1763[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AxisOrigin;                                        // 0x120(0x18)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             AxisOrientation;                                   // 0x138(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URevolveBoundaryToolProperties* GetDefaultObj();

};

// 0x70 (0x220 - 0x1B0)
// Class MeshModelingToolsExp.RevolveBoundaryTool
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
public:
	uint8                                        Pad_1767[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x1C8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class URevolveBoundaryToolProperties*        Settings;                                          // 0x1D0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x1D8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x1E0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x1E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_176D[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URevolveBoundaryTool* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.SculptBrushProperties
class USculptBrushProperties : public UInteractiveToolPropertySet
{
public:
	struct FBrushToolRadius                      BrushSize;                                         // 0xA8(0x14)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        BrushFalloffAmount;                                // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowFalloff;                                      // 0xC0(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1773[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Depth;                                             // 0xC4(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	bool                                         bHitBackFaces;                                     // 0xC8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1774[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FlowRate;                                          // 0xCC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        Spacing;                                           // 0xD0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        Lazyness;                                          // 0xD4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowPerBrushProps;                                // 0xD8(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowLazyness;                                     // 0xD9(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowFlowRate;                                     // 0xDA(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowSpacing;                                      // 0xDB(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_177A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USculptBrushProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.KelvinBrushProperties
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                        FalloffDistance;                                   // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Stiffness;                                         // 0xAC(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Incompressiblity;                                  // 0xB0(0x4)(ConstParm, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        BrushSteps;                                        // 0xB4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UKelvinBrushProperties* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.WorkPlaneProperties
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPropertySetEnabled;                               // 0xA8(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowGizmo;                                        // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_177B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0xB0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	uint8                                        Pad_177E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0xD0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UWorkPlaneProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SculptMaxBrushProperties
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                        MaxHeight;                                         // 0xA8(0x4)(BlueprintVisible, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFreezeCurrentHeight;                              // 0xAC(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1787[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USculptMaxBrushProperties* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.SeamSculptToolBuilder
class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USeamSculptToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SeamSculptToolProperties
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHitBackFaces;                                     // 0xA9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_178F[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USeamSculptToolProperties* GetDefaultObj();

};

// 0xF8 (0x3C0 - 0x2C8)
// Class MeshModelingToolsExp.SeamSculptTool
class USeamSculptTool : public UDynamicMeshBrushTool
{
public:
	class USeamSculptToolProperties*             Settings;                                          // 0x2C8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPreviewGeometry*                      PreviewGeom;                                       // 0x2D0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1791[0xE8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USeamSculptTool* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SelfUnionMeshesToolProperties
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTrimFlaps;                                        // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTryFixHoles;                                      // 0xA9(0x1)(BlueprintReadOnly, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bTryCollapseEdges;                                 // 0xAA(0x1)(ConstParm, BlueprintVisible, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1793[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WindingThreshold;                                  // 0xAC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowNewBoundaryEdges;                             // 0xB0(0x1)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOnlyUseFirstMeshMaterials;                        // 0xB1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1795[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USelfUnionMeshesToolProperties* GetDefaultObj();

};

// 0x48 (0x148 - 0x100)
// Class MeshModelingToolsExp.SelfUnionMeshesTool
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class USelfUnionMeshesToolProperties*        Properties;                                        // 0x100(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x108(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_179C[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USelfUnionMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SelfUnionMeshesToolBuilder
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USelfUnionMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SkinWeightsBindingToolBuilder
class USkinWeightsBindingToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USkinWeightsBindingToolBuilder* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.SkinWeightsBindingToolProperties
class USkinWeightsBindingToolProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_17A4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        CurrentBone;                                       // 0xB0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ESkinWeightsBindType              BindingType;                                       // 0xC0(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Stiffness;                                         // 0xC4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        MaxInfluences;                                     // 0xC8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        VoxelResolution;                                   // 0xCC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17A7[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USkinWeightsBindingToolProperties* GetDefaultObj();

};

// 0x2D0 (0x388 - 0xB8)
// Class MeshModelingToolsExp.SkinWeightsBindingTool
class USkinWeightsBindingTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_17AA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class USkinWeightsBindingToolProperties*     Properties;                                        // 0xC0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xC8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17AB[0x2B8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USkinWeightsBindingTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.SkinWeightsPaintToolBuilder
class USkinWeightsPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USkinWeightsPaintToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.SkinWeightsPaintToolProperties
class USkinWeightsPaintToolProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_17B5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        CurrentBone;                                       // 0xB0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17B6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USkinWeightsPaintToolProperties* GetDefaultObj();

};

// 0x6C8 (0x990 - 0x2C8)
// Class MeshModelingToolsExp.SkinWeightsPaintTool
class USkinWeightsPaintTool : public UDynamicMeshBrushTool
{
public:
	class USkinWeightsPaintToolProperties*       ToolProps;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17BA[0x6C0];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USkinWeightsPaintTool* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SmoothMeshToolProperties
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESmoothMeshToolSmoothType         SmoothingType;                                     // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17C2[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USmoothMeshToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.IterativeSmoothProperties
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothingPerStep;                                  // 0xA8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        Steps;                                             // 0xAC(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSmoothBoundary;                                   // 0xB0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17C6[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIterativeSmoothProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.DiffusionSmoothProperties
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothingPerStep;                                  // 0xA8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        Steps;                                             // 0xAC(0x4)(EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreserveUVs;                                      // 0xB0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17CC[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDiffusionSmoothProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.ImplicitSmoothProperties
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothSpeed;                                       // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        Smoothness;                                        // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPreserveUVs;                                      // 0xB0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17D4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VolumeCorrection;                                  // 0xB4(0x4)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UImplicitSmoothProperties* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MeshModelingToolsExp.SmoothWeightMapSetProperties
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                        MinSmoothMultiplier;                               // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17DD[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USmoothWeightMapSetProperties* GetDefaultObj();

};

// 0x30 (0x430 - 0x400)
// Class MeshModelingToolsExp.SmoothMeshTool
class USmoothMeshTool : public UBaseMeshProcessingTool
{
public:
	class USmoothMeshToolProperties*             SmoothProperties;                                  // 0x400(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UIterativeSmoothProperties*            IterativeProperties;                               // 0x408(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDiffusionSmoothProperties*            DiffusionProperties;                               // 0x410(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UImplicitSmoothProperties*             ImplicitProperties;                                // 0x418(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USmoothWeightMapSetProperties*         WeightMapProperties;                               // 0x420(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17E6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USmoothMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SmoothMeshToolBuilder
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USmoothMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SplitMeshesToolBuilder
class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USplitMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SplitMeshesToolProperties
class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTransferMaterials;                                // 0xA8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USplitMeshesToolProperties* GetDefaultObj();

};

// 0x38 (0xF0 - 0xB8)
// Class MeshModelingToolsExp.SplitMeshesTool
class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	class USplitMeshesToolProperties*            BasicProperties;                                   // 0xB8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F5[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USplitMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.TransferMeshToolBuilder
class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UTransferMeshToolBuilder* GetDefaultObj();

};

// 0x78 (0x120 - 0xA8)
// Class MeshModelingToolsExp.TransferMeshToolProperties
class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTransferMaterials;                                // 0xA8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1804[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SourceLOD;                                         // 0xB0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                TargetLod;                                         // 0xC0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsStaticMeshSource;                               // 0xD0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1805[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        SourceLODNamesList;                                // 0xD8(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1807[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        TargetLODNamesList;                                // 0xF8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1809[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsStaticMeshTarget;                               // 0x118(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_180A[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTransferMeshToolProperties* GetDefaultObj();

	void GetTargetLODNamesFunc(TArray<class FString>* ReturnValue);
	void GetSourceLODNamesFunc(TArray<class FString>* ReturnValue);
};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingToolsExp.TransferMeshTool
class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_180D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransferMeshToolProperties*           BasicProperties;                                   // 0xC0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransferMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.TransformMeshesToolBuilder
class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UTransformMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.TransformMeshesToolProperties
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ETransformMeshesTransformMode     TransformMode;                                     // 0xA8(0x1)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bApplyToInstances;                                 // 0xA9(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSetPivotMode;                                     // 0xAA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableSnapDragging;                               // 0xAB(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ETransformMeshesSnapDragSource    SnapDragSource;                                    // 0xAC(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ETransformMeshesSnapDragRotationMode RotationMode;                                      // 0xAD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHaveInstances;                                    // 0xAE(0x1)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1818[0x1];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTransformMeshesToolProperties* GetDefaultObj();

};

// 0xD8 (0x190 - 0xB8)
// Class MeshModelingToolsExp.TransformMeshesTool
class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_181C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformMeshesToolProperties*        TransformProps;                                    // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTransformMeshesTarget>        ActiveGizmos;                                      // 0xC8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xD8(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1821[0xB0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTransformMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VolumeToMeshToolBuilder
class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVolumeToMeshToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.VolumeToMeshToolProperties
class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bWeldEdges;                                        // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoRepair;                                       // 0xA9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOptimizeMesh;                                     // 0xAA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowWireframe;                                    // 0xAB(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_182A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVolumeToMeshToolProperties* GetDefaultObj();

};

// 0x270 (0x308 - 0x98)
// Class MeshModelingToolsExp.VolumeToMeshTool
class UVolumeToMeshTool : public UInteractiveTool
{
public:
	class UVolumeToMeshToolProperties*           Settings;                                          // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xA0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	TLazyObjectPtr<class AVolume>                TargetVolume;                                      // 0xB0(0x1C)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1834[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ULineSetComponent*                     VolumeEdgesSet;                                    // 0xD0(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1837[0x230];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVolumeToMeshTool* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.VoxelBlendMeshesToolProperties
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       BlendPower;                                        // 0xA8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	double                                       BlendFalloff;                                      // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EVoxelBlendOperation              Operation;                                         // 0xB8(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bVoxWrap;                                          // 0xB9(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRemoveInternalsAfterVoxWrap;                      // 0xBA(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1840[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ThickenShells;                                     // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class MeshModelingToolsExp.VoxelBlendMeshesTool
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelBlendMeshesToolProperties*       BlendProperties;                                   // 0x118(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMorphologyOperation              Operation;                                         // 0xA8(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1855[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Distance;                                          // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bVoxWrap;                                          // 0xB8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRemoveInternalsAfterVoxWrap;                      // 0xB9(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1859[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ThickenShells;                                     // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class MeshModelingToolsExp.VoxelMorphologyMeshesTool
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelMorphologyMeshesToolProperties*  MorphologyProperties;                              // 0x118(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       WindingThreshold;                                  // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ExtendBounds;                                      // 0xB0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	int32                                        SurfaceSearchSteps;                                // 0xB8(0x4)(Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bSolidAtBoundaries;                                // 0xBC(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bApplyThickenShells;                               // 0xBD(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_186F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ThickenShells;                                     // 0xC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class MeshModelingToolsExp.VoxelSolidifyMeshesTool
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelSolidifyMeshesToolProperties*    SolidifyProperties;                                // 0x118(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.WeldMeshEdgesToolBuilder
class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UWeldMeshEdgesToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.WeldMeshEdgesToolProperties
class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Tolerance;                                         // 0xA8(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnlyUnique;                                       // 0xAC(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bResolveTJunctions;                                // 0xAD(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1886[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        InitialEdges;                                      // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        RemainingEdges;                                    // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWeldMeshEdgesToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
class UWeldMeshEdgesOperatorFactory : public UObject
{
public:
	uint8                                        Pad_188A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UWeldMeshEdgesTool*                    WeldMeshEdgesTool;                                 // 0x30(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UWeldMeshEdgesOperatorFactory* GetDefaultObj();

};

// 0x30 (0xE8 - 0xB8)
// Class MeshModelingToolsExp.WeldMeshEdgesTool
class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{
public:
	class UWeldMeshEdgesToolProperties*          Settings;                                          // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   PreviewCompute;                                    // 0xC0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UWeldMeshEdgesOperatorFactory*         OperatorFactory;                                   // 0xD0(0x8)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1893[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWeldMeshEdgesTool* GetDefaultObj();

};

}


