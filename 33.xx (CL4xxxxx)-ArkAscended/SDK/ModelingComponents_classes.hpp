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
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xB0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

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
	uint8                                        Pad_7B5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UTransformInputsToolProperties*        TransformProperties;                               // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                           // 0xD0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UTransformProxy*>               TransformProxies;                                  // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UCombinedTransformGizmo*>       TransformGizmos;                                   // 0xF0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7C1[0x60];                                     // Fixing Size Of Struct > TateDumper <

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
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPersistentMeshSelection*              InputSelection;                                    // 0xB0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_7D0[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshTopologySelectionMechanicProperties* Properties;                                        // 0x78(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7D1[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xE0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	class USingleClickOrDragInputBehavior*       ClickOrDragBehavior;                               // 0xE8(0x8)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D3[0x5C8];                                    // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x6C0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UTriangleSetComponent*                 DrawnTriangleSetComponent;                         // 0x6C8(0x8)(Edit, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D5[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    HighlightedFaceMaterial;                           // 0x720(0x8)(BlueprintVisible, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D6[0x3C8];                                    // Fixing Size Of Struct > TateDumper <

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
	bool                                         bSelectVertices;                                   // 0xA8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelectEdges;                                      // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelectFaces;                                      // 0xAA(0x1)(ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelectEdgeLoops;                                  // 0xAB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelectEdgeRings;                                  // 0xAC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHitBackFaces;                                     // 0xAD(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableMarquee;                                    // 0xAE(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMarqueeIgnoreOcclusion;                           // 0xAF(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPreferProjectedElement;                           // 0xB0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSelectDownRay;                                    // 0xB1(0x1)(BlueprintVisible, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreOcclusion;                                  // 0xB2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7F0[0xD];                                      // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_7F1[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandArguments* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommandResult
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{
public:
	uint8                                        Pad_7F4[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandResult* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.VoxelProperties
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        VoxelCount;                                        // 0xA8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoSimplify;                                     // 0xAC(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRemoveInternalSurfaces;                           // 0xAD(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7FA[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       SimplifyMaxErrorFactor;                            // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       CubeRootMinComponentVolume;                        // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)

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
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7FF[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesProperties* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xB0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_802[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OutputNewName;                                     // 0xB8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                OutputExistingName;                                // 0xC8(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedHandleSourceProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.TransformInputsToolProperties
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowTransformGizmo;                               // 0xA8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_805[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_80F[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_810[0x330];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBaseMeshProcessingTool* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class ModelingComponents.BaseVoxelTool
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                      VoxProperties;                                     // 0x100(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_814[0x10];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_81C[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshReplacementChangeTarget* GetDefaultObj();

};

// 0x120 (0x860 - 0x740)
// Class ModelingComponents.OctreeDynamicMeshComponent
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_822[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          MeshObject;                                        // 0x7A0(0x8)(Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_823[0xB8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOctreeDynamicMeshComponent* GetDefaultObj();

	void SetDynamicMesh(class UDynamicMesh** NewMesh);
};

// 0x88 (0x760 - 0x6D8)
// Class ModelingComponents.LineSetComponent
class ULineSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    LineMaterial;                                      // 0x6D8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      Bounds;                                            // 0x6E0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundsDirty;                                      // 0x718(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_82A[0x47];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULineSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.MeshElementsVisualizerProperties
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bVisible;                                          // 0xA8(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bShowWireframe;                                    // 0xA9(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bShowBorders;                                      // 0xAA(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowUVSeams;                                      // 0xAB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowNormalSeams;                                  // 0xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowColorSeams;                                   // 0xAD(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_834[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ThicknessScale;                                    // 0xB0(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                WireframeColor;                                    // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FColor                                BoundaryEdgeColor;                                 // 0xB8(0x4)(ConstParm, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FColor                                UVSeamColor;                                       // 0xBC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FColor                                NormalSeamColor;                                   // 0xC0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FColor                                ColorSeamColor;                                    // 0xC4(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DepthBias;                                         // 0xC8(0x4)(BlueprintVisible, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAdjustDepthBiasUsingMeshSize;                     // 0xCC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_839[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshElementsVisualizerProperties* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class ModelingComponents.PreviewGeometry
class UPreviewGeometry : public UObject
{
public:
	class APreviewGeometryActor*                 ParentActor;                                       // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class ULineSetComponent*> LineSets;                                          // 0x30(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class UPointSetComponent*> PointSets;                                         // 0x80(0x50)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPreviewGeometry* GetDefaultObj();

	bool SetPointSetVisibility(class FString* PointSetIdentifier, bool ReturnValue);
	void SetPointSetMaterial(class FString* PointSetIdentifier, class UMaterialInterface* NewMaterial, bool ReturnValue);
	bool SetLineSetVisibility(class FString* LineSetIdentifier, bool ReturnValue);
	void SetLineSetMaterial(class FString* LineSetIdentifier, class UMaterialInterface* NewMaterial, bool ReturnValue);
	void SetAllPointSetsMaterial(class UMaterialInterface* Material);
	void SetAllLineSetsMaterial(class UMaterialInterface* Material);
	void RemovePointSet(class FString* PointSetIdentifier, bool* bDestroy, bool ReturnValue);
	void RemoveLineSet(class FString* LineSetIdentifier, bool* bDestroy, bool ReturnValue);
	void RemoveAllPointSets(bool* bDestroy);
	void RemoveAllLineSets(bool* bDestroy);
	void GetActor(class APreviewGeometryActor* ReturnValue);
	void FindPointSet(class FString* PointSetIdentifier, class UPointSetComponent* ReturnValue);
	void FindLineSet(class FString* LineSetIdentifier, class ULineSetComponent* ReturnValue);
	void Disconnect();
	void CreateInWorld(class UWorld* World, struct FTransform* WithTransform);
	void AddPointSet(class FString* PointSetIdentifier, class UPointSetComponent* ReturnValue);
	void AddLineSet(class FString* LineSetIdentifier, class ULineSetComponent* ReturnValue);
};

// 0x28 (0xF8 - 0xD0)
// Class ModelingComponents.MeshElementsVisualizer
class UMeshElementsVisualizer : public UPreviewGeometry
{
public:
	class UMeshElementsVisualizerProperties*     Settings;                                          // 0xD0(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UMeshWireframeComponent*               WireframeComponent;                                // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_874[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshElementsVisualizer* GetDefaultObj();

};

// 0x98 (0x770 - 0x6D8)
// Class ModelingComponents.MeshWireframeComponent
class UMeshWireframeComponent : public UMeshComponent
{
public:
	float                                        LineDepthBias;                                     // 0x6D8(0x4)(Edit, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LineDepthBiasSizeScale;                            // 0x6DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ThicknessScale;                                    // 0x6E0(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableWireframe;                                  // 0x6E4(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_877[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                WireframeColor;                                    // 0x6E8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        WireframeThickness;                                // 0x6EC(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableBoundaryEdges;                              // 0x6F0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_879[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                BoundaryEdgeColor;                                 // 0x6F4(0x4)(ConstParm, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        BoundaryEdgeThickness;                             // 0x6F8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableUVSeams;                                    // 0x6FC(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_87A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                UVSeamColor;                                       // 0x700(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        UVSeamThickness;                                   // 0x704(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableNormalSeams;                                // 0x708(0x1)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_87C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                NormalSeamColor;                                   // 0x70C(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        NormalSeamThickness;                               // 0x710(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableColorSeams;                                 // 0x714(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_87E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                ColorSeamColor;                                    // 0x718(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ColorSeamThickness;                                // 0x71C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    LineMaterial;                                      // 0x720(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x728(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_87F[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshWireframeComponent* GetDefaultObj();

};

// 0x88 (0x760 - 0x6D8)
// Class ModelingComponents.PointSetComponent
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    PointMaterial;                                     // 0x6D8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      Bounds;                                            // 0x6E0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundsDirty;                                      // 0x718(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_881[0x47];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPointSetComponent* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingComponents.PreviewMesh
class UPreviewMesh : public UObject
{
public:
	uint8                                        Pad_883[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bBuildSpatialDataStructure;                        // 0x40(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_884[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x50(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_885[0xE8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPreviewMesh* GetDefaultObj();

};

// 0x410 (0x550 - 0x140)
// Class ModelingComponents.PolyEditPreviewMesh
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	uint8                                        Pad_887[0x410];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FBoxSphereBounds                      Bounds;                                            // 0x6D8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundsDirty;                                      // 0x710(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_88D[0xCF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTriangleSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.UVLayoutPreviewProperties
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnabled;                                          // 0xA8(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_88F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EUVLayoutPreviewSide              Side;                                              // 0xAC(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_892[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Offset;                                            // 0xB8(0x10)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bShowWireframe;                                    // 0xC8(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_893[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutPreviewProperties* GetDefaultObj();

};

// 0x138 (0x160 - 0x28)
// Class ModelingComponents.UVLayoutPreview
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*            Settings;                                          // 0x28(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x30(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UTriangleSetComponent*                 TriangleComponent;                                 // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowBackingRectangle;                             // 0x40(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_897[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    BackingRectangleMaterial;                          // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_898[0x110];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutPreview* GetDefaultObj();

};

// 0x590 (0x5C0 - 0x30)
// Class ModelingComponents.CollectSurfacePathMechanic
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_89C[0x590];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCollectSurfacePathMechanic* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class ModelingComponents.ConstructionPlaneMechanic
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_89E[0x98];                                     // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xC8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xD0(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8A2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class ULocalSingleClickInputBehavior*        MiddleClickToSetGizmoBehavior;                     // 0xE8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstructionPlaneMechanic* GetDefaultObj();

};

// 0x650 (0x680 - 0x30)
// Class ModelingComponents.CurveControlPointsMechanic
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8A6[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8A7[0x498];                                    // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x4E8(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x4F0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     DrawnControlSegments;                              // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UPointSetComponent*                    PreviewPoint;                                      // 0x500(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     PreviewSegment;                                    // 0x508(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8AB[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PointTransformProxy;                               // 0x588(0x8)(ConstParm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x590(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8AC[0xE8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCurveControlPointsMechanic* GetDefaultObj();

};

// 0x240 (0x270 - 0x30)
// Class ModelingComponents.DragAlignmentMechanic
class UDragAlignmentMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8AD[0x240];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDragAlignmentMechanic* GetDefaultObj();

};

// 0x2A8 (0x2D0 - 0x28)
// Class ModelingComponents.DragAlignmentInteraction
class UDragAlignmentInteraction : public UObject
{
public:
	uint8                                        Pad_8AF[0x2A8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDragAlignmentInteraction* GetDefaultObj();

};

// 0x4D0 (0x500 - 0x30)
// Class ModelingComponents.LatticeControlPointsMechanic
class ULatticeControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8B2[0x1F0];                                    // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x220(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     DrawnLatticeEdges;                                 // 0x230(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8B4[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PointTransformProxy;                               // 0x2E0(0x8)(ConstParm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x2E8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8B6[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8B7[0x1B0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULatticeControlPointsMechanic* GetDefaultObj();

};

// 0x4F0 (0x520 - 0x30)
// Class ModelingComponents.PlaneDistanceFromHitMechanic
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8BA[0x4F0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlaneDistanceFromHitMechanic* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class ModelingComponents.PolyLassoMarqueeMechanic
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8BF[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SpacingTolerance;                                  // 0x88(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x8C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FLinearColor                          LineColor;                                         // 0x90(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FLinearColor                          ClosedColor;                                       // 0xA0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableFreehandPolygons;                           // 0xB0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableMultiClickPolygons;                         // 0xB1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C2[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xB8(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xC0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C5[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyLassoMarqueeMechanic* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class ModelingComponents.RectangleMarqueeMechanic
class URectangleMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8C9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseExternalClickDragBehavior;                     // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseExternalUpdateCameraState;                     // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8CB[0x46];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       OnDragRectangleChangedDeferredThreshold;           // 0x80(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8CD[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xD0(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8CF[0x148];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URectangleMarqueeMechanic* GetDefaultObj();

};

// 0x1E8 (0x210 - 0x28)
// Class ModelingComponents.RectangleMarqueeInteraction
class URectangleMarqueeInteraction : public UObject
{
public:
	uint8                                        Pad_8D3[0x1E8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URectangleMarqueeInteraction* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	enum class ESpaceCurveControlPointTransformMode TransformMode;                                     // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin;                                   // 0xAC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Softness;                                          // 0xB0(0x4)(ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff;                                       // 0xB4(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanicPropertySet* GetDefaultObj();

};

// 0x2A0 (0x2D0 - 0x30)
// Class ModelingComponents.SpaceCurveDeformationMechanic
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8DB[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8DD[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class USpaceCurveDeformationMechanicPropertySet* TransformProperties;                               // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8DE[0xF8];                                     // Fixing Size After Last Property  > TateDumper <
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x168(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UPointSetComponent*                    RenderPoints;                                      // 0x170(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     RenderSegments;                                    // 0x178(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8DF[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       PointTransformProxy;                               // 0x1B8(0x8)(ConstParm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E0[0x108];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanic* GetDefaultObj();

};

// 0x3E0 (0x410 - 0x30)
// Class ModelingComponents.SpatialCurveDistanceMechanic
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_8E2[0x3E0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpatialCurveDistanceMechanic* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	uint8                                        Pad_8E3[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          PreviewMesh;                                       // 0x58(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	TArray<class UMaterialInterface*>            StandardMaterials;                                 // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x70(0x8)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    WorkingMaterial;                                   // 0x78(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    SecondaryMaterial;                                 // 0x80(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UWorld>                 PreviewWorld;                                      // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E5[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshOpPreviewWithBackgroundCompute* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ModelingComponents.ModelingComponentsSettings
class UModelingComponentsSettings : public UDeveloperSettings
{
public:
	bool                                         bEnableRayTracingWhileEditing;                     // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRayTracing;                                 // 0x39(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x3A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0x3B(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_8E8[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModelingComponentsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class ModelingComponents.ModelingComponentsEditorSettings
class UModelingComponentsEditorSettings : public UDeveloperSettings
{
public:
	enum class EModelingComponentsPlaneVisualizationMode GridMode;                                          // 0x38(0x1)(Edit, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8EA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumGridLines;                                      // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GridSpacing;                                       // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GridScale;                                         // 0x44(0x4)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GridSize;                                          // 0x48(0x4)(ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8ED[0x4];                                      // Fixing Size Of Struct > TateDumper <

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

	struct FCreateTextureObjectParams CreateTextureObject(const struct FCreateTextureObjectResult& ReturnValue);
	struct FCreateMeshObjectParams CreateMeshObject(const struct FCreateMeshObjectResult& ReturnValue);
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
	class FString                                OutputType;                                        // 0xA8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                VolumeType;                                        // 0xB8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        OutputTypeNamesList;                               // 0xC0(0x10)(Edit, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowVolumeList;                                   // 0xD0(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_908[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCreateMeshObjectTypeProperties* GetDefaultObj();

	void ShouldShowPropertySet(bool ReturnValue);
	void GetOutputTypeNamesFunc(const TArray<class FString>& ReturnValue);
	void GetCurrentCreateMeshType(enum class ECreateObjectTypeHint ReturnValue);
};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_90C[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesSingle* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.PolygroupLayersProperties
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  ActiveGroupLayer;                                  // 0xA8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        GroupLayersList;                                   // 0xB0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPolygroupLayersProperties* GetDefaultObj();

	void GetGroupLayersFunc(const TArray<class FString>& ReturnValue);
};

// 0x20 (0xC8 - 0xA8)
// Class ModelingComponents.WeightMapSetProperties
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  WeightMap;                                         // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        WeightMapsList;                                    // 0xB0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInvertWeightMap;                                  // 0xC0(0x1)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_917[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWeightMapSetProperties* GetDefaultObj();

	void GetWeightMapsFunc(const TArray<class FString>& ReturnValue);
};

// 0x250 (0x278 - 0x28)
// Class ModelingComponents.GeometrySelectionManager
class UGeometrySelectionManager : public UObject
{
public:
	uint8                                        Pad_91C[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	class UGeometrySelectionEditCommandArguments* SelectionArguments;                                // 0x50(0x8)(ConstParm, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_920[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UInteractiveToolsContext*              ToolsContext;                                      // 0x60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_921[0x210];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGeometrySelectionManager* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ModelingComponents.PersistentMeshSelection
class UPersistentMeshSelection : public UObject
{
public:
	uint8                                        Pad_924[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPersistentMeshSelection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class ModelingComponents.PersistentMeshSelectionManager
class UPersistentMeshSelectionManager : public UObject
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UPersistentMeshSelection*              ActiveSelection;                                   // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UPreviewGeometry*                      SelectionDisplay;                                  // 0x38(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
	class UPolygonSelectionMechanicProperties*   Properties;                                        // 0xAF0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_92E[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanic* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ModelingComponents.ModelingSceneSnappingManager
class UModelingSceneSnappingManager : public USceneSnappingManager
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_92F[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModelingSceneSnappingManager* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class ModelingComponents.MultiTransformer
class UMultiTransformer : public UObject
{
public:
	uint8                                        Pad_932[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x88(0x8)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_934[0x70];                                     // Fixing Size After Last Property  > TateDumper <
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x100(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x108(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x110(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_935[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiTransformer* GetDefaultObj();

};

}


