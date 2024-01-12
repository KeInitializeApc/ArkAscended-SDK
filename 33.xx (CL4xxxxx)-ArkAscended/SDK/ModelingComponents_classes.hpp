#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class UMultiSelectionMeshEditingToolBuilder* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class ModelingComponents.MultiSelectionMeshEditingTool
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMultiSelectionMeshEditingTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommand
class UGeometrySelectionEditCommand : public UInteractiveCommand
{
public:

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommand* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class ModelingComponents.BaseCreateFromSelectedTool
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_A7E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UTransformInputsToolProperties*        TransformProperties;                               // 0xC0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                           // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UTransformProxy*>               TransformProxies;                                  // 0xE0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UCombinedTransformGizmo*>       TransformGizmos;                                   // 0xF0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.SingleTargetWithSelectionToolBuilder
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleTargetWithSelectionToolBuilder* GetDefaultObj();

};

// 0x68 (0x110 - 0xA8)
// Class ModelingComponents.SingleTargetWithSelectionTool
class USingleTargetWithSelectionTool : public USingleSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A82[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USingleTargetWithSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleSelectionMeshEditingToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SingleSelectionMeshEditingTool
class USingleSelectionMeshEditingTool : public USingleSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPersistentMeshSelection*              InputSelection;                                    // 0xB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USingleSelectionMeshEditingTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModelingComponents.InteractiveToolActivity
class UInteractiveToolActivity : public UInteractionMechanic
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolActivity* GetDefaultObj();

};

// 0xAC0 (0xAF0 - 0x30)
// Class ModelingComponents.MeshTopologySelectionMechanic
class UMeshTopologySelectionMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_A90[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshTopologySelectionMechanicProperties* Properties;                                        // 0x78(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A93[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xE0(0x8)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USingleClickOrDragInputBehavior*       ClickOrDragBehavior;                               // 0xE8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A94[0x5C8];                                    // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x6C0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UTriangleSetComponent*                 DrawnTriangleSetComponent;                         // 0x6C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A97[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    HighlightedFaceMaterial;                           // 0x720(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A98[0x3C8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshTopologySelectionMechanic* GetDefaultObj();

};

// 0x0 (0xAF0 - 0xAF0)
// Class ModelingComponents.BoundarySelectionMechanic
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
{
public:

	static class UClass* StaticClass();
	static class UBoundarySelectionMechanic* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.DynamicMeshCommitter
class IDynamicMeshCommitter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDynamicMeshCommitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.DynamicMeshProvider
class IDynamicMeshProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDynamicMeshProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.PersistentDynamicMeshSource
class IPersistentDynamicMeshSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPersistentDynamicMeshSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.ToolActivityHost
class IToolActivityHost : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolActivityHost* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.MeshTopologySelectionMechanicProperties
class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bSelectVertices;                                   // 0xA8(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectEdges;                                      // 0xA9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectFaces;                                      // 0xAA(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectEdgeLoops;                                  // 0xAB(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectEdgeRings;                                  // 0xAC(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHitBackFaces;                                     // 0xAD(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableMarquee;                                    // 0xAE(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bMarqueeIgnoreOcclusion;                           // 0xAF(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPreferProjectedElement;                           // 0xB0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSelectDownRay;                                    // 0xB1(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIgnoreOcclusion;                                  // 0xB2(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AAB[0xD];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshTopologySelectionMechanicProperties* GetDefaultObj();

	void SelectAll();
	void InvertSelection();
};

// 0x20 (0x50 - 0x30)
// Class ModelingComponents.GeometrySelectionEditCommandArguments
class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{
public:
	uint8                                        Pad_AAD[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandArguments* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommandResult
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{
public:
	uint8                                        Pad_AB1[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandResult* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.VoxelProperties
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        VoxelCount;                                        // 0xA8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoSimplify;                                     // 0xAC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRemoveInternalSurfaces;                           // 0xAD(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB2[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       SimplifyMaxErrorFactor;                            // 0xB0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CubeRootMinComponentVolume;                        // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UVoxelProperties* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesBase* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesProperties
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB7[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesProperties* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xB0(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OutputNewName;                                     // 0xB8(0x10)(Edit, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                OutputExistingName;                                // 0xC8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedHandleSourceProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.TransformInputsToolProperties
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowTransformGizmo;                               // 0xA8(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ABB[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTransformInputsToolProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseMeshProcessingToolBuilder
class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseMeshProcessingToolBuilder* GetDefaultObj();

};

// 0x358 (0x400 - 0xA8)
// Class ModelingComponents.BaseMeshProcessingTool
class UBaseMeshProcessingTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_ABF[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC0[0x330];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBaseMeshProcessingTool* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class ModelingComponents.BaseVoxelTool
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                      VoxProperties;                                     // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC2[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBaseVoxelTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSurfacePointMeshEditingToolBuilder* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class ModelingComponents.DynamicMeshReplacementChangeTarget
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	uint8                                        Pad_AC4[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshReplacementChangeTarget* GetDefaultObj();

};

// 0x120 (0x860 - 0x740)
// Class ModelingComponents.OctreeDynamicMeshComponent
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_AC8[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          MeshObject;                                        // 0x7A0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACA[0xB8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOctreeDynamicMeshComponent* GetDefaultObj();

	void SetDynamicMesh(class UDynamicMesh** NewMesh);
};

// 0x88 (0x760 - 0x6D8)
// Class ModelingComponents.LineSetComponent
class ULineSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    LineMaterial;                                      // 0x6D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      Bounds;                                            // 0x6E0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundsDirty;                                      // 0x718(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACE[0x47];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULineSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.MeshElementsVisualizerProperties
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bVisible;                                          // 0xA8(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowWireframe;                                    // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowBorders;                                      // 0xAA(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowUVSeams;                                      // 0xAB(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowNormalSeams;                                  // 0xAC(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowColorSeams;                                   // 0xAD(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AD0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ThicknessScale;                                    // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FColor                                WireframeColor;                                    // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                BoundaryEdgeColor;                                 // 0xB8(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                UVSeamColor;                                       // 0xBC(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                NormalSeamColor;                                   // 0xC0(0x4)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FColor                                ColorSeamColor;                                    // 0xC4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DepthBias;                                         // 0xC8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAdjustDepthBiasUsingMeshSize;                     // 0xCC(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AD1[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshElementsVisualizerProperties* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class ModelingComponents.PreviewGeometry
class UPreviewGeometry : public UObject
{
public:
	class APreviewGeometryActor*                 ParentActor;                                       // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class ULineSetComponent*> LineSets;                                          // 0x30(0x50)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class UPointSetComponent*> PointSets;                                         // 0x80(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPreviewGeometry* GetDefaultObj();

	bool SetPointSetVisibility(class FString* PointSetIdentifier, bool* bVisible);
	bool SetPointSetMaterial(class FString* PointSetIdentifier);
	bool SetLineSetVisibility(class FString* LineSetIdentifier, bool* bVisible);
	bool SetLineSetMaterial(class FString* LineSetIdentifier);
	class UMaterialInterface* SetAllPointSetsMaterial();
	class UMaterialInterface* SetAllLineSetsMaterial();
	bool RemovePointSet(class FString* PointSetIdentifier, bool* bDestroy);
	bool RemoveLineSet(class FString* LineSetIdentifier, bool* bDestroy);
	void RemoveAllPointSets(bool* bDestroy);
	void RemoveAllLineSets(bool* bDestroy);
	class APreviewGeometryActor* GetActor();
	class UPointSetComponent* FindPointSet(class FString* PointSetIdentifier);
	class ULineSetComponent* FindLineSet(class FString* LineSetIdentifier);
	void Disconnect();
	class UWorld* CreateInWorld(struct FTransform* WithTransform);
	class UPointSetComponent* AddPointSet(class FString* PointSetIdentifier);
	class ULineSetComponent* AddLineSet(class FString* LineSetIdentifier);
};

// 0x28 (0xF8 - 0xD0)
// Class ModelingComponents.MeshElementsVisualizer
class UMeshElementsVisualizer : public UPreviewGeometry
{
public:
	class UMeshElementsVisualizerProperties*     Settings;                                          // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMeshWireframeComponent*               WireframeComponent;                                // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AFA[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshElementsVisualizer* GetDefaultObj();

};

// 0x98 (0x770 - 0x6D8)
// Class ModelingComponents.MeshWireframeComponent
class UMeshWireframeComponent : public UMeshComponent
{
public:
	float                                        LineDepthBias;                                     // 0x6D8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LineDepthBiasSizeScale;                            // 0x6DC(0x4)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ThicknessScale;                                    // 0x6E0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableWireframe;                                  // 0x6E4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AFD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                WireframeColor;                                    // 0x6E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        WireframeThickness;                                // 0x6EC(0x4)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableBoundaryEdges;                              // 0x6F0(0x1)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_AFF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                BoundaryEdgeColor;                                 // 0x6F4(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        BoundaryEdgeThickness;                             // 0x6F8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableUVSeams;                                    // 0x6FC(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B00[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                UVSeamColor;                                       // 0x700(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        UVSeamThickness;                                   // 0x704(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableNormalSeams;                                // 0x708(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B02[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                NormalSeamColor;                                   // 0x70C(0x4)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        NormalSeamThickness;                               // 0x710(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableColorSeams;                                 // 0x714(0x1)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B04[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                ColorSeamColor;                                    // 0x718(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ColorSeamThickness;                                // 0x71C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    LineMaterial;                                      // 0x720(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x728(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B05[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshWireframeComponent* GetDefaultObj();

};

// 0x88 (0x760 - 0x6D8)
// Class ModelingComponents.PointSetComponent
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    PointMaterial;                                     // 0x6D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      Bounds;                                            // 0x6E0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundsDirty;                                      // 0x718(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B07[0x47];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPointSetComponent* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingComponents.PreviewMesh
class UPreviewMesh : public UObject
{
public:
	uint8                                        Pad_B0B[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bBuildSpatialDataStructure;                        // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B0C[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x50(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	uint8                                        Pad_B0D[0xE8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPreviewMesh* GetDefaultObj();

};

// 0x410 (0x550 - 0x140)
// Class ModelingComponents.PolyEditPreviewMesh
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	uint8                                        Pad_B11[0x410];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditPreviewMesh* GetDefaultObj();

};

// 0x0 (0x4D0 - 0x4D0)
// Class ModelingComponents.PreviewGeometryActor
class APreviewGeometryActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class APreviewGeometryActor* GetDefaultObj();

};

// 0x108 (0x7E0 - 0x6D8)
// Class ModelingComponents.TriangleSetComponent
class UTriangleSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                      Bounds;                                            // 0x6D8(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundsDirty;                                      // 0x710(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B14[0xCF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTriangleSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.UVLayoutPreviewProperties
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnabled;                                          // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_B16[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EUVLayoutPreviewSide              Side;                                              // 0xAC(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_B17[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Offset;                                            // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bShowWireframe;                                    // 0xC8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B18[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutPreviewProperties* GetDefaultObj();

};

// 0x138 (0x160 - 0x28)
// Class ModelingComponents.UVLayoutPreview
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*            Settings;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UTriangleSetComponent*                 TriangleComponent;                                 // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowBackingRectangle;                             // 0x40(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B1B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    BackingRectangleMaterial;                          // 0x48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B1C[0x110];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutPreview* GetDefaultObj();

};

// 0x590 (0x5C0 - 0x30)
// Class ModelingComponents.CollectSurfacePathMechanic
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B20[0x590];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCollectSurfacePathMechanic* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class ModelingComponents.ConstructionPlaneMechanic
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B21[0x98];                                     // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xC8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B23[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULocalSingleClickInputBehavior*        MiddleClickToSetGizmoBehavior;                     // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstructionPlaneMechanic* GetDefaultObj();

};

// 0x650 (0x680 - 0x30)
// Class ModelingComponents.CurveControlPointsMechanic
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B26[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B27[0x498];                                    // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x4E8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x4F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     DrawnControlSegments;                              // 0x4F8(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPointSetComponent*                    PreviewPoint;                                      // 0x500(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     PreviewSegment;                                    // 0x508(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B2B[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PointTransformProxy;                               // 0x588(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x590(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B2C[0xE8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCurveControlPointsMechanic* GetDefaultObj();

};

// 0x240 (0x270 - 0x30)
// Class ModelingComponents.DragAlignmentMechanic
class UDragAlignmentMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B2F[0x240];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDragAlignmentMechanic* GetDefaultObj();

};

// 0x2A8 (0x2D0 - 0x28)
// Class ModelingComponents.DragAlignmentInteraction
class UDragAlignmentInteraction : public UObject
{
public:
	uint8                                        Pad_B30[0x2A8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDragAlignmentInteraction* GetDefaultObj();

};

// 0x4D0 (0x500 - 0x30)
// Class ModelingComponents.LatticeControlPointsMechanic
class ULatticeControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B35[0x1F0];                                    // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x220(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     DrawnLatticeEdges;                                 // 0x230(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B37[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PointTransformProxy;                               // 0x2E0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x2E8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B38[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B39[0x1B0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULatticeControlPointsMechanic* GetDefaultObj();

};

// 0x4F0 (0x520 - 0x30)
// Class ModelingComponents.PlaneDistanceFromHitMechanic
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B3B[0x4F0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneDistanceFromHitMechanic* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class ModelingComponents.PolyLassoMarqueeMechanic
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B3E[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SpacingTolerance;                                  // 0x88(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x8C(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          LineColor;                                         // 0x90(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          ClosedColor;                                       // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableFreehandPolygons;                           // 0xB0(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableMultiClickPolygons;                         // 0xB1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B41[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xB8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xC0(0x8)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B42[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyLassoMarqueeMechanic* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class ModelingComponents.RectangleMarqueeMechanic
class URectangleMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B44[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseExternalClickDragBehavior;                     // 0x38(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseExternalUpdateCameraState;                     // 0x39(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B47[0x46];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       OnDragRectangleChangedDeferredThreshold;           // 0x80(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B4A[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xD0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B4B[0x148];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URectangleMarqueeMechanic* GetDefaultObj();

};

// 0x1E8 (0x210 - 0x28)
// Class ModelingComponents.RectangleMarqueeInteraction
class URectangleMarqueeInteraction : public UObject
{
public:
	uint8                                        Pad_B4C[0x1E8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URectangleMarqueeInteraction* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	enum class ESpaceCurveControlPointTransformMode TransformMode;                                     // 0xA8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin;                                   // 0xAC(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Softness;                                          // 0xB0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff;                                       // 0xB4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanicPropertySet* GetDefaultObj();

};

// 0x2A0 (0x2D0 - 0x30)
// Class ModelingComponents.SpaceCurveDeformationMechanic
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B50[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B51[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class USpaceCurveDeformationMechanicPropertySet* TransformProperties;                               // 0x68(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B52[0xF8];                                     // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	class UPointSetComponent*                    RenderPoints;                                      // 0x170(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     RenderSegments;                                    // 0x178(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B53[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PointTransformProxy;                               // 0x1B8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x1C0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B54[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanic* GetDefaultObj();

};

// 0x3E0 (0x410 - 0x30)
// Class ModelingComponents.SpatialCurveDistanceMechanic
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B55[0x3E0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpatialCurveDistanceMechanic* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	uint8                                        Pad_B56[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          PreviewMesh;                                       // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	TArray<class UMaterialInterface*>            StandardMaterials;                                 // 0x60(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x70(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    WorkingMaterial;                                   // 0x78(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    SecondaryMaterial;                                 // 0x80(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UWorld>                 PreviewWorld;                                      // 0x88(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B57[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshOpPreviewWithBackgroundCompute* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ModelingComponents.ModelingComponentsSettings
class UModelingComponentsSettings : public UDeveloperSettings
{
public:
	bool                                         bEnableRayTracingWhileEditing;                     // 0x38(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableRayTracing;                                 // 0x39(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, InstancedReference)
	bool                                         bEnableCollision;                                  // 0x3A(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B59[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModelingComponentsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class ModelingComponents.ModelingComponentsEditorSettings
class UModelingComponentsEditorSettings : public UDeveloperSettings
{
public:
	enum class EModelingComponentsPlaneVisualizationMode GridMode;                                          // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B5A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumGridLines;                                      // 0x3C(0x4)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GridSpacing;                                       // 0x40(0x4)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GridScale;                                         // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GridSize;                                          // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B5D[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModelingComponentsEditorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.ModelingObjectsCreationAPI
class UModelingObjectsCreationAPI : public UObject
{
public:

	static class UClass* StaticClass();
	static class UModelingObjectsCreationAPI* GetDefaultObj();

	struct FCreateTextureObjectResult CreateTextureObject();
	struct FCreateMeshObjectResult CreateMeshObject();
};

// 0x0 (0x4D0 - 0x4D0)
// Class ModelingComponents.PreviewMeshActor
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class APreviewMeshActor* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class ModelingComponents.CreateMeshObjectTypeProperties
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                OutputType;                                        // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                VolumeType;                                        // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        OutputTypeNamesList;                               // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowVolumeList;                                   // 0xD0(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B65[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCreateMeshObjectTypeProperties* GetDefaultObj();

	bool ShouldShowPropertySet();
	TArray<class FString> GetOutputTypeNamesFunc();
	enum class ECreateObjectTypeHint GetCurrentCreateMeshType();
};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B66[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesSingle* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.PolygroupLayersProperties
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  ActiveGroupLayer;                                  // 0xA8(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        GroupLayersList;                                   // 0xB0(0x10)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPolygroupLayersProperties* GetDefaultObj();

	TArray<class FString> GetGroupLayersFunc();
};

// 0x20 (0xC8 - 0xA8)
// Class ModelingComponents.WeightMapSetProperties
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  WeightMap;                                         // 0xA8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        WeightMapsList;                                    // 0xB0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInvertWeightMap;                                  // 0xC0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6F[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWeightMapSetProperties* GetDefaultObj();

	TArray<class FString> GetWeightMapsFunc();
};

// 0x250 (0x278 - 0x28)
// Class ModelingComponents.GeometrySelectionManager
class UGeometrySelectionManager : public UObject
{
public:
	uint8                                        Pad_B71[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometrySelectionEditCommandArguments* SelectionArguments;                                // 0x50(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B72[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UInteractiveToolsContext*              ToolsContext;                                      // 0x60(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B73[0x210];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometrySelectionManager* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ModelingComponents.PersistentMeshSelection
class UPersistentMeshSelection : public UObject
{
public:
	uint8                                        Pad_B75[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPersistentMeshSelection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class ModelingComponents.PersistentMeshSelectionManager
class UPersistentMeshSelectionManager : public UObject
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPersistentMeshSelection*              ActiveSelection;                                   // 0x30(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPreviewGeometry*                      SelectionDisplay;                                  // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPersistentMeshSelectionManager* GetDefaultObj();

};

// 0x0 (0xC0 - 0xC0)
// Class ModelingComponents.PolygonSelectionMechanicProperties
class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
{
public:

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanicProperties* GetDefaultObj();

};

// 0x10 (0xB00 - 0xAF0)
// Class ModelingComponents.PolygonSelectionMechanic
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
{
public:
	class UPolygonSelectionMechanicProperties*   Properties;                                        // 0xAF0(0x8)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7A[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanic* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ModelingComponents.ModelingSceneSnappingManager
class UModelingSceneSnappingManager : public USceneSnappingManager
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7C[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModelingSceneSnappingManager* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class ModelingComponents.MultiTransformer
class UMultiTransformer : public UObject
{
public:
	uint8                                        Pad_B7E[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7F[0x70];                                     // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x100(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x108(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, EditConst, GlobalConfig)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x110(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_B80[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiTransformer* GetDefaultObj();

};

}


