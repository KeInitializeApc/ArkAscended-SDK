#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x120 - 0x28)
// Class MeshModelingTools.PolyEditActivityContext
class UPolyEditActivityContext : public UObject
{
public:
	class UPolyEditCommonProperties*             CommonProperties;                                  // 0x28(0x8)(Edit, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_76E[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_770[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x70(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_771[0xA8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditActivityContext* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.AddPrimitiveToolBuilder
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_777[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAddPrimitiveToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.ProceduralShapeToolProperties
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMakeMeshPolygroupMode            PolygroupMode;                                     // 0xA8(0x1)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMakeMeshPlacementType            TargetSurface;                                     // 0xA9(0x1)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMakeMeshPivotLocation            PivotLocation;                                     // 0xAA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_77B[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Rotation;                                          // 0xAC(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bAlignToNormal;                                    // 0xB0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowGizmo;                                        // 0xB1(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowGizmoOptions;                                 // 0xB2(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_781[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralShapeToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralBoxToolProperties
class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Width;                                             // 0xB8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	float                                        Depth;                                             // 0xBC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	float                                        Height;                                            // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        WidthSubdivisions;                                 // 0xC4(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        DepthSubdivisions;                                 // 0xC8(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HeightSubdivisions;                                // 0xCC(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralBoxToolProperties* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class MeshModelingTools.ProceduralRectangleToolProperties
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralRectType               RectangleType;                                     // 0xB8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Width;                                             // 0xBC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	float                                        Depth;                                             // 0xC0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        WidthSubdivisions;                                 // 0xC4(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        DepthSubdivisions;                                 // 0xC8(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CornerRadius;                                      // 0xCC(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        CornerSlices;                                      // 0xD0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_787[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralRectangleToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralDiscToolProperties
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralDiscType               DiscType;                                          // 0xB8(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        RadialSubdivisions;                                // 0xC4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        HoleRadius;                                        // 0xC8(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_78B[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralDiscToolProperties* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralTorusToolProperties
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        MajorRadius;                                       // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinorRadius;                                       // 0xBC(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MajorSlices;                                       // 0xC0(0x4)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MinorSlices;                                       // 0xC4(0x4)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralTorusToolProperties* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralCylinderToolProperties
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Height;                                            // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HeightSubdivisions;                                // 0xC4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralCylinderToolProperties* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralConeToolProperties
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Height;                                            // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HeightSubdivisions;                                // 0xC4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralConeToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralArrowToolProperties
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        ShaftRadius;                                       // 0xB8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ShaftHeight;                                       // 0xBC(0x4)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        HeadRadius;                                        // 0xC0(0x4)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        HeadHeight;                                        // 0xC4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        RadialSlices;                                      // 0xC8(0x4)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HeightSubdivisions;                                // 0xCC(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralArrowToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralSphereToolProperties
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EProceduralSphereType             SubdivisionType;                                   // 0xBC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Subdivisions;                                      // 0xC0(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        HorizontalSlices;                                  // 0xC4(0x4)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        VerticalSlices;                                    // 0xC8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A2[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralSphereToolProperties* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class MeshModelingTools.ProceduralStairsToolProperties
class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralStairsType             StairsType;                                        // 0xB8(0x4)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSteps;                                          // 0xBC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StepWidth;                                         // 0xC0(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StepHeight;                                        // 0xC4(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StepDepth;                                         // 0xC8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CurveAngle;                                        // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SpiralAngle;                                       // 0xD0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InnerRadius;                                       // 0xD4(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralStairsToolProperties* GetDefaultObj();

};

// 0x98 (0x138 - 0xA0)
// Class MeshModelingTools.AddPrimitiveTool
class UAddPrimitiveTool : public USingleClickTool
{
public:
	uint8                                        Pad_7AC[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB8(0x8)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UProceduralShapeToolProperties*        ShapeSettings;                                     // 0xC0(0x8)(BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xC8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xD0(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UCombinedTransformGizmo*               Gizmo;                                             // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class FString                                AssetName;                                         // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_7B3[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAddPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddBoxPrimitiveTool
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddBoxPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddCylinderPrimitiveTool
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddCylinderPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddConePrimitiveTool
class UAddConePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddConePrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddRectanglePrimitiveTool
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddRectanglePrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddDiscPrimitiveTool
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddDiscPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddTorusPrimitiveTool
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddTorusPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddArrowPrimitiveTool
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddArrowPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddSpherePrimitiveTool
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddSpherePrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddStairsPrimitiveTool
class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddStairsPrimitiveTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.CombineMeshesToolBuilder
class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:
	uint8                                        Pad_7D1[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCombineMeshesToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingTools.CombineMeshesToolProperties
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsDuplicateMode;                                  // 0xA8(0x1)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xAC(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                OutputNewName;                                     // 0xB0(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                OutputExistingName;                                // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCombineMeshesToolProperties* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class MeshModelingTools.CombineMeshesTool
class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_7DA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UCombineMeshesToolProperties*          BasicProperties;                                   // 0xC0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UOnAcceptHandleSourcesPropertiesBase*  HandleSourceProperties;                            // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_7DC[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCombineMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DeleteGeometrySelectionCommand
class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class UDeleteGeometrySelectionCommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DisconnectGeometrySelectionCommand
class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class UDisconnectGeometrySelectionCommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_Invert
class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_Invert* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected
class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_ExpandToConnected* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected
class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_InvertConnected* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_Expand
class UModifyGeometrySelectionCommand_Expand : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_Expand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_Contract
class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_Contract* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.RetriangulateGeometrySelectionCommand
class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class URetriangulateGeometrySelectionCommand* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingTools.CSGMeshesToolProperties
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECSGOperation                     Operation;                                         // 0xA8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bTryFixHoles;                                      // 0xA9(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTryCollapseEdges;                                 // 0xAA(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_804[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WindingThreshold;                                  // 0xAC(0x4)(Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowNewBoundaries;                                // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowSubtractedMesh;                               // 0xB1(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_807[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SubtractedMeshOpacity;                             // 0xB4(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SubtractedMeshColor;                               // 0xB8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseFirstMeshMaterials;                            // 0xC8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_80A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCSGMeshesToolProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingTools.TrimMeshesToolProperties
class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ETrimOperation                    WhichMesh;                                         // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ETrimSide                         TrimSide;                                          // 0xA9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_810[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WindingThreshold;                                  // 0xAC(0x4)(Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowTrimmingMesh;                                 // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_811[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OpacityOfTrimmingMesh;                             // 0xB4(0x4)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          ColorOfTrimmingMesh;                               // 0xB8(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTrimMeshesToolProperties* GetDefaultObj();

};

// 0x58 (0x158 - 0x100)
// Class MeshModelingTools.CSGMeshesTool
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class UCSGMeshesToolProperties*              CSGProperties;                                     // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UTrimMeshesToolProperties*             TrimProperties;                                    // 0x108(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_818[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPreviewMesh*>                  OriginalMeshPreviews;                              // 0x120(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              PreviewsGhostMaterial;                             // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x138(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_81A[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCSGMeshesTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.CSGMeshesToolBuilder
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:
	uint8                                        Pad_81D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCSGMeshesToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.CutMeshWithMeshToolProperties
class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTryFixHoles;                                      // 0xA8(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTryCollapseEdges;                                 // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_823[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WindingThreshold;                                  // 0xAC(0x4)(Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowNewBoundaries;                                // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseFirstMeshMaterials;                            // 0xB1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_824[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCutMeshWithMeshToolProperties* GetDefaultObj();

};

// 0x278 (0x378 - 0x100)
// Class MeshModelingTools.CutMeshWithMeshTool
class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{
public:
	class UCutMeshWithMeshToolProperties*        CutProperties;                                     // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPreviewMesh*                          IntersectPreviewMesh;                              // 0x108(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_82A[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x130(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_82B[0x240];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCutMeshWithMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.CutMeshWithMeshToolBuilder
class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UCutMeshWithMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DrawAndRevolveToolBuilder
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDrawAndRevolveToolBuilder* GetDefaultObj();

};

// 0x70 (0x118 - 0xA8)
// Class MeshModelingTools.RevolveProperties
class URevolveProperties : public UInteractiveToolPropertySet
{
public:
	double                                       RevolveDegreesClamped;                             // 0xA8(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	double                                       RevolveDegrees;                                    // 0xB0(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       RevolveDegreesOffset;                              // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	double                                       StepsMaxDegrees;                                   // 0xC0(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bExplicitSteps;                                    // 0xC8(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_83A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumExplicitSteps;                                  // 0xCC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	double                                       HeightOffsetPerDegree;                             // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bReverseRevolutionDirection;                       // 0xD8(0x1)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bFlipMesh;                                         // 0xD9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSharpNormals;                                     // 0xDA(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_840[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       SharpNormalsDegreeThreshold;                       // 0xE0(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bPathAtMidpointOfStep;                             // 0xE8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERevolvePropertiesPolygroupMode   PolygroupMode;                                     // 0xE9(0x1)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERevolvePropertiesQuadSplit       QuadSplitMode;                                     // 0xEA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_842[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URevolveProperties* GetDefaultObj();

};

// 0x40 (0x158 - 0x118)
// Class MeshModelingTools.RevolveToolProperties
class URevolveToolProperties : public URevolveProperties
{
public:
	enum class ERevolvePropertiesCapFillMode     CapFillMode;                                       // 0x118(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bClosePathToAxis;                                  // 0x119(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_84A[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DrawPlaneOrigin;                                   // 0x120(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRotator                              DrawPlaneOrientation;                              // 0x138(0x18)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableSnapping;                                   // 0x150(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowedToEditDrawPlane;                           // 0x151(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_84C[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URevolveToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.RevolveOperatorFactory
class URevolveOperatorFactory : public UObject
{
public:
	uint8                                        Pad_84E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UDrawAndRevolveTool*                   RevolveTool;                                       // 0x30(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URevolveOperatorFactory* GetDefaultObj();

};

// 0xC8 (0x160 - 0x98)
// Class MeshModelingTools.DrawAndRevolveTool
class UDrawAndRevolveTool : public UInteractiveTool
{
public:
	uint8                                        Pad_852[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveControlPointsMechanic*           ControlPointsMechanic;                             // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x130(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x138(0x8)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class URevolveToolProperties*                Settings;                                          // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x148(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x150(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_859[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDrawAndRevolveTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DrawPolygonToolBuilder
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDrawPolygonToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingTools.DrawPolygonToolStandardProperties
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolygonDrawMode              PolygonDrawMode;                                   // 0xA8(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowSelfIntersections;                           // 0xA9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_867[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        FeatureSizeRatio;                                  // 0xAC(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        RadialSlices;                                      // 0xB0(0x4)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Distance;                                          // 0xB4(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bShowGridGizmo;                                    // 0xB8(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDrawPolygonExtrudeMode           ExtrudeMode;                                       // 0xB9(0x1)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_86A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ExtrudeHeight;                                     // 0xBC(0x4)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDrawPolygonToolStandardProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.DrawPolygonToolSnapProperties
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapping;                                   // 0xA8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSnapToWorldGrid;                                  // 0xA9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSnapToVertices;                                   // 0xAA(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSnapToEdges;                                      // 0xAB(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSnapToAxes;                                       // 0xAC(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSnapToLengths;                                    // 0xAD(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSnapToSurfaces;                                   // 0xAE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_872[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SnapToSurfacesOffset;                              // 0xB0(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_873[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDrawPolygonToolSnapProperties* GetDefaultObj();

};

// 0x4B8 (0x550 - 0x98)
// Class MeshModelingTools.DrawPolygonTool
class UDrawPolygonTool : public UInteractiveTool
{
public:
	uint8                                        Pad_879[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xA0(0x8)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDrawPolygonToolStandardProperties*    PolygonProperties;                                 // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDrawPolygonToolSnapProperties*        SnapProperties;                                    // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_882[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	class UPreviewMesh*                          PreviewMesh;                                       // 0x150(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_884[0x3D0];                                    // Fixing Size After Last Property  > TateDumper <
	class UPlaneDistanceFromHitMechanic*         HeightMechanic;                                    // 0x528(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x530(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x538(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_88A[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDrawPolygonTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.EditMeshPolygonsToolBuilder
class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:
	uint8                                        Pad_890[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.PolyEditCommonProperties
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowSelectableCorners;                            // 0xA9(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bGizmoVisible;                                     // 0xAA(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_89A[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ELocalFrameMode                   LocalFrameMode;                                    // 0xAC(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLockRotation;                                     // 0xB0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bLocalCoordSystem;                                 // 0xB1(0x1)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8A0[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditCommonProperties* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
public:
	uint8                                        Pad_8A6[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditMeshPolygonsActionModeToolBuilder* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
public:
	uint8                                        Pad_8A8[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditMeshPolygonsSelectionModeToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_8AA[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActionPropertySet* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class MeshModelingTools.PolyEditTopologyProperties
class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{
public:
	bool                                         bAddExtraCorners;                                  // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8AE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       ExtraCornerAngleThresholdDegrees;                  // 0xB8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPolyEditTopologyProperties* GetDefaultObj();

	void RegenerateExtraCorners();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolActions
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActions* GetDefaultObj();

	void SimplifyByGroups();
	void Retriangulate();
	void RecalcNormals();
	void PushPull();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void InsertEdgeLoop();
	void InsertEdge();
	void Flip();
	void Extrude();
	void Duplicate();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
	void Bevel();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActions_Triangles* GetDefaultObj();

	void RecalcNormals();
	void PushPull();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Duplicate();
	void Disconnect();
	void Delete();
	void CutFaces();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolUVActions
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolUVActions* GetDefaultObj();

	void PlanarProjection();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolEdgeActions* GetDefaultObj();

	void Weld();
	void Straighten();
	void FillHole();
	void Bridge();
	void Bevel();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolEdgeActions_Triangles* GetDefaultObj();

	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolCancelAction
class UEditMeshPolygonsToolCancelAction : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolCancelAction* GetDefaultObj();

	void Done();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction
class UEditMeshPolygonsToolAcceptCancelAction : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolAcceptCancelAction* GetDefaultObj();

	void Cancel();
	void Apply();
};

// 0x750 (0x860 - 0x110)
// Class MeshModelingTools.EditMeshPolygonsTool
class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool
{
public:
	uint8                                        Pad_930[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x130(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditCommonProperties*             CommonProps;                                       // 0x138(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UEditMeshPolygonsToolActions*          EditActions;                                       // 0x140(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;                             // 0x148(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UEditMeshPolygonsToolEdgeActions*      EditEdgeActions;                                   // 0x150(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;                         // 0x158(0x8)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UEditMeshPolygonsToolUVActions*        EditUVActions;                                     // 0x160(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UEditMeshPolygonsToolCancelAction*     CancelAction;                                      // 0x168(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditMeshPolygonsToolAcceptCancelAction* AcceptCancelAction;                                // 0x170(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditTopologyProperties*           TopologyProperties;                                // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditExtrudeActivity*              ExtrudeActivity;                                   // 0x180(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditInsetOutsetActivity*          InsetOutsetActivity;                               // 0x188(0x8)(ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditCutFacesActivity*             CutFacesActivity;                                  // 0x190(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditPlanarProjectionUVActivity*   PlanarProjectionUVActivity;                        // 0x198(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditInsertEdgeActivity*           InsertEdgeActivity;                                // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditInsertEdgeLoopActivity*       InsertEdgeLoopActivity;                            // 0x1A8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditBevelEdgeActivity*            BevelEdgeActivity;                                 // 0x1B0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_941[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x1F0(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x1F8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x200(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x208(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x210(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	uint8                                        Pad_947[0x648];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEditMeshPolygonsTool* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.NewMeshMaterialProperties
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	TWeakObjectPtr<class UMaterialInterface>     Material;                                          // 0xA8(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
	float                                        UVScale;                                           // 0xB0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bWorldSpaceUVScale;                                // 0xB4(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowWireframe;                                    // 0xB5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowExtendedOptions;                              // 0xB6(0x1)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_954[0x1];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNewMeshMaterialProperties* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingTools.ExistingMeshMaterialProperties
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESetMeshMaterialMode              MaterialMode;                                      // 0xA8(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_95A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CheckerDensity;                                    // 0xAC(0x4)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0xB0(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                UVChannel;                                         // 0xB8(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        UVChannelNamesList;                                // 0xC8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0xD8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UExistingMeshMaterialProperties* GetDefaultObj();

	TArray<class FString> GetUVChannelNamesFunc();
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingTools.MeshEditingViewProperties
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_965[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EMeshEditingMaterialModes         MaterialMode;                                      // 0xAC(0x4)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bFlatShading;                                      // 0xB0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_967[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Color;                                             // 0xB4(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_969[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0xC8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	double                                       Opacity;                                           // 0xD0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	struct FLinearColor                          TransparentMaterialColor;                          // 0xD8(0x10)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTwoSided;                                         // 0xE8(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_96D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UMaterialInterface>     CustomMaterial;                                    // 0xEC(0x8)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_96E[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshEditingViewProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingTools.MeshUVChannelProperties
class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                UVChannel;                                         // 0xA8(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class FString>                        UVChannelNamesList;                                // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeshUVChannelProperties* GetDefaultObj();

	TArray<class FString> GetUVChannelNamesFunc();
};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.RecomputeUVsToolBuilder
class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URecomputeUVsToolBuilder* GetDefaultObj();

};

// 0x60 (0x118 - 0xB8)
// Class MeshModelingTools.RecomputeUVsTool
class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class URecomputeUVsToolProperties*           Settings;                                          // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xD0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCreateUVLayoutViewOnSetup;                        // 0xD8(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_987[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UUVLayoutPreview*                      UVLayoutView;                                      // 0xE0(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class URecomputeUVsOpFactory*                RecomputeUVsOpFactory;                             // 0xE8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xF0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_989[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecomputeUVsTool* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditBevelEdgeProperties
class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{
public:
	double                                       BevelDistance;                                     // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPolyEditBevelEdgeProperties* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class MeshModelingTools.PolyEditBevelEdgeActivity
class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_98E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UPolyEditBevelEdgeProperties*          BevelProperties;                                   // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x40(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_991[0xF8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditBevelEdgeActivity* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditCutProperties
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditCutPlaneOrientation      Orientation;                                       // 0xA8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig)
	bool                                         bSnapToVertices;                                   // 0xAC(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_993[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditCutProperties* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class MeshModelingTools.PolyEditCutFacesActivity
class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_998[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolyEditCutProperties*                CutProperties;                                     // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x48(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x50(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x58(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_99B[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditCutFacesActivity* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditExtrudeProperties
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       Distance;                                          // 0xB0(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class EPolyEditExtrudeDirection         Direction;                                         // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xBC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShellsToSolids;                                   // 0xC0(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPolyEditExtrudeModeOptions       DirectionMode;                                     // 0xC4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       MaxDistanceScaleFactor;                            // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9AA[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditExtrudeProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditOffsetProperties
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9AC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       Distance;                                          // 0xB0(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class EPolyEditOffsetModeOptions        DirectionMode;                                     // 0xB8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9B0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxDistanceScaleFactor;                            // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShellsToSolids;                                   // 0xC8(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xCC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B5[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditOffsetProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditPushPullProperties
class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9BE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       Distance;                                          // 0xB0(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	enum class EPolyEditPushPullModeOptions      DirectionMode;                                     // 0xB8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9C0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxDistanceScaleFactor;                            // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShellsToSolids;                                   // 0xC8(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xCC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C7[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditPushPullProperties* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class MeshModelingTools.PolyEditExtrudeActivity
class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_9CB[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolyEditExtrudeProperties*            ExtrudeProperties;                                 // 0x50(0x8)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditOffsetProperties*             OffsetProperties;                                  // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditPushPullProperties*           PushPullProperties;                                // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x68(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x70(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D2[0x158];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditExtrudeActivity* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.GroupEdgeInsertionProperties
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupEdgeInsertionMode           InsertionMode;                                     // 0xA8(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bContinuousInsertion;                              // 0xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       VertexTolerance;                                   // 0xB0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroupEdgeInsertionProperties* GetDefaultObj();

};

// 0x440 (0x470 - 0x30)
// Class MeshModelingTools.PolyEditInsertEdgeActivity
class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_9E7[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UGroupEdgeInsertionProperties*         Settings;                                          // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x50(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9EB[0x418];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditInsertEdgeActivity* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.EdgeLoopInsertionProperties
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EEdgeLoopPositioningMode          PositionMode;                                      // 0xA8(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EEdgeLoopInsertionMode            InsertionMode;                                     // 0xAC(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumLoops;                                          // 0xB0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A06[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       ProportionOffset;                                  // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	double                                       DistanceOffset;                                    // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInteractive;                                      // 0xC8(0x1)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bFlipOffsetDirection;                              // 0xC9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHighlightProblemGroups;                           // 0xCA(0x1)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A12[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       VertexTolerance;                                   // 0xD0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEdgeLoopInsertionProperties* GetDefaultObj();

};

// 0x3D0 (0x400 - 0x30)
// Class MeshModelingTools.PolyEditInsertEdgeLoopActivity
class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_A1B[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UEdgeLoopInsertionProperties*          Settings;                                          // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x50(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1F[0x3A8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditInsertEdgeLoopActivity* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.PolyEditInsetOutsetProperties
class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Softness;                                          // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundaryOnly;                                     // 0xAC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A3F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AreaScale;                                         // 0xB0(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReproject;                                        // 0xB4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOutset;                                           // 0xB5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A41[0x2];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditInsetOutsetProperties* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class MeshModelingTools.PolyEditInsetOutsetActivity
class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_A4A[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolyEditInsetOutsetProperties*        Settings;                                          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_A4B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x50(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x58(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x60(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A50[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditInsetOutsetActivity* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditSetUVProperties
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowMaterial;                                     // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditSetUVProperties* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class MeshModelingTools.PolyEditPlanarProjectionUVActivity
class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_A62[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UPolyEditSetUVProperties*              SetUVProperties;                                   // 0x40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x48(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x50(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x58(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A65[0x90];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPolyEditPlanarProjectionUVActivity* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.UVLayoutToolBuilder
class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UUVLayoutToolBuilder* GetDefaultObj();

};

// 0xA8 (0x160 - 0xB8)
// Class MeshModelingTools.UVLayoutTool
class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UUVLayoutProperties*                   BasicProperties;                                   // 0xC0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xC8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UUVLayoutOperatorFactory*>      Factories;                                         // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7F[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	class UUVLayoutPreview*                      UVLayoutView;                                      // 0x150(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A81[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVLayoutTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.UVProjectionToolBuilder
class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UUVProjectionToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.UVProjectionToolEditActions
class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_A98[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVProjectionToolEditActions* GetDefaultObj();

	void Reset();
	void AutoFitAlign();
	void AutoFit();
};

// 0xE8 (0x190 - 0xA8)
// Class MeshModelingTools.UVProjectionToolProperties
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVProjectionMethod               ProjectionType;                                    // 0xA8(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Dimensions;                                        // 0xB0(0x18)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bProportionalDimensions;                           // 0xC8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EUVProjectionToolInitializationMode Initialization;                                    // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CylinderSplitAngle;                                // 0xD0(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ExpMapNormalBlending;                              // 0xD4(0x4)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ExpMapSmoothingSteps;                              // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ExpMapSmoothingAlpha;                              // 0xDC(0x4)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0xE0(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_AAF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Scale;                                             // 0xE8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FVector2D                             Translation;                                       // 0xF8(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FVector                               SavedDimensions;                                   // 0x108(0x18)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSavedProportionalDimensions;                      // 0x120(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB3[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            SavedTransform;                                    // 0x130(0x60)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUVProjectionToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.UVProjectionOperatorFactory
class UUVProjectionOperatorFactory : public UObject
{
public:
	uint8                                        Pad_AB9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UUVProjectionTool*                     Tool;                                              // 0x30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUVProjectionOperatorFactory* GetDefaultObj();

};

// 0x3B0 (0x4C0 - 0x110)
// Class MeshModelingTools.UVProjectionTool
class UUVProjectionTool : public USingleTargetWithSelectionTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0x110(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UUVProjectionToolProperties*           BasicProperties;                                   // 0x118(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UUVProjectionToolEditActions*          EditActions;                                       // 0x120(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0x128(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x130(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x138(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x140(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTransformProxy*                       TransformProxy;                                    // 0x148(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	class UUVProjectionOperatorFactory*          OperatorFactory;                                   // 0x150(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPreviewGeometry*                      EdgeRenderer;                                      // 0x158(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACC[0x348];                                    // Fixing Size After Last Property  > TateDumper <
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0x4A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACD[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUVProjectionTool* GetDefaultObj();

};

}


