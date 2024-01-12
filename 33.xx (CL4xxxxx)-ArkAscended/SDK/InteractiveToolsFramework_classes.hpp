#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolBuilder
class UInteractiveToolBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolBuilder* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public UObject
{
public:
	uint8                                        Pad_920[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UInteractiveToolPropertySet*> CachedPropertiesMap;                               // 0x38(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsPropertySetEnabled;                             // 0x88(0x1)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_921[0x1F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractiveToolPropertySet* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public UObject
{
public:
	uint8                                        Pad_923[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x60(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ToolPropertyObjects;                               // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_924[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractiveTool* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class InteractiveToolsFramework.SingleClickTool
class USingleClickTool : public UInteractiveTool
{
public:
	uint8                                        Pad_926[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USingleClickTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolWithToolTargetsBuilder* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class InteractiveToolsFramework.MultiSelectionTool
class UMultiSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_92B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UToolTarget*>                   Targets;                                           // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMultiSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommand
class UInteractiveCommand : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveCommand* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class InteractiveToolsFramework.SingleSelectionTool
class USingleSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_92F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UToolTarget*                           Target;                                            // 0xA0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class USingleSelectionTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractionMechanic
class UInteractionMechanic : public UObject
{
public:
	uint8                                        Pad_935[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractionMechanic* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandArguments
class UInteractiveCommandArguments : public UObject
{
public:
	uint8                                        Pad_938[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractiveCommandArguments* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandResult
class UInteractiveCommandResult : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveCommandResult* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                        Pad_93A[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshSurfacePointToolBuilder* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class InteractiveToolsFramework.InternalToolFrameworkActor
class AInternalToolFrameworkActor : public AActor
{
public:
	bool                                         bIsSelectableInEditor;                             // 0x4C8(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_942[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AInternalToolFrameworkActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SceneSnappingManager
class USceneSnappingManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class USceneSnappingManager* GetDefaultObj();

};

// 0x58 (0x100 - 0xA8)
// Class InteractiveToolsFramework.MeshSurfacePointTool
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_945[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeshSurfacePointTool* GetDefaultObj();

};

// 0x188 (0x288 - 0x100)
// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                  BrushProperties;                                   // 0x100(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInBrushStroke;                                    // 0x108(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_947[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WorldToLocalScale;                                 // 0x10C(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FBrushStampData                       LastBrushStamp;                                    // 0x110(0x130)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_948[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UBrushBaseProperties>    PropertyClass;                                     // 0x250(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBrushStampIndicator*                  BrushStampIndicator;                               // 0x280(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class UBaseBrushTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AssetBackedTarget
class IAssetBackedTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetBackedTarget* GetDefaultObj();

};

// 0x30 (0x6C8 - 0x698)
// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                          Color;                                             // 0x698(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        HoverSizeMultiplier;                               // 0x6A8(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PixelHitDistanceThreshold;                         // 0x6AC(0x4)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_957[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x6B8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig)
	uint8                                        Pad_959[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoBaseComponent* GetDefaultObj();

	bool UpdateWorldLocalState();
	bool UpdateHoverState();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoBuilder
class UInteractiveGizmoBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveGizmoBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolContextTransactionProvider
class IToolContextTransactionProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolContextTransactionProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolFrameworkComponent
class IToolFrameworkComponent : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolFrameworkComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
class IInteractiveToolCameraFocusAPI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractiveToolCameraFocusAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
class IInteractiveToolNestedAcceptCancelAPI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractiveToolNestedAcceptCancelAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
class IInteractiveToolExclusiveToolAPI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractiveToolExclusiveToolAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MaterialProvider
class IMaterialProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMaterialProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionCommitter
class IMeshDescriptionCommitter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshDescriptionCommitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionProvider
class IMeshDescriptionProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshDescriptionProvider* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	uint8                                        Pad_96D[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoBaseVec2ParameterSource* GetDefaultObj();

};

// 0x30 (0x78 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                             Value;                                             // 0x48(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x58(0x20)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoLocalVec2ParameterSource* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	uint8                                        Pad_972[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoBaseFloatParameterSource* GetDefaultObj();

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_979[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0xD0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xE0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Parameter;                                         // 0xF0(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_97C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CurTranslationAxis;                                // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurTranslationOrigin;                              // 0x118(0x18)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoAxisTranslationParameterSource* GetDefaultObj();

};

// 0x1D8 (0x220 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_980[0xC8];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x110(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x120(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             Parameter;                                         // 0x130(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x140(0x20)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurTranslationOrigin;                              // 0x160(0x18)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurTranslationNormal;                              // 0x178(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurTranslationAxisX;                               // 0x190(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurTranslationAxisY;                               // 0x1A8(0x18)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0x1C0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoPlaneTranslationParameterSource* GetDefaultObj();

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_984[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0xD0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xE0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Angle;                                             // 0xF0(0x4)(Edit, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_985[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CurRotationAxis;                                   // 0x100(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurRotationOrigin;                                 // 0x118(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoAxisRotationParameterSource* GetDefaultObj();

};

// 0x118 (0x160 - 0x48)
// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_986[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Parameter;                                         // 0x70(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x80(0x20)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleOrigin;                                    // 0xA0(0x18)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleNormal;                                    // 0xB8(0x18)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleAxisX;                                     // 0xD0(0x18)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleAxisY;                                     // 0xE8(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0x100(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoUniformScaleParameterSource* GetDefaultObj();

};

// 0xC8 (0x110 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bClampToZero;                                      // 0x6C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_989[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Parameter;                                         // 0x70(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x74(0x8)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_98A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CurScaleAxis;                                      // 0x80(0x18)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleOrigin;                                    // 0x98(0x18)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0xB0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoAxisScaleParameterSource* GetDefaultObj();

};

// 0x168 (0x1B0 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_98D[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x90(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xA0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        ScaleMultiplier;                                   // 0xB0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseEqualScaling;                                  // 0xB4(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bClampToZero;                                      // 0xB5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_98E[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Parameter;                                         // 0xB8(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0xC8(0x20)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleOrigin;                                    // 0xE8(0x18)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleNormal;                                    // 0x100(0x18)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleAxisX;                                     // 0x118(0x18)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CurScaleAxisY;                                     // 0x130(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_991[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitialTransform;                                  // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoPlaneScaleParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PhysicsDataSource
class IPhysicsDataSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPhysicsDataSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
class IPrimitiveComponentBackedTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPrimitiveComponentBackedTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
class ISkeletalMeshBackedTarget : public IAssetBackedTarget
{
public:

	static class UClass* StaticClass();
	static class ISkeletalMeshBackedTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.StaticMeshBackedTarget
class IStaticMeshBackedTarget : public IAssetBackedTarget
{
public:

	static class UClass* StaticClass();
	static class IStaticMeshBackedTarget* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InputBehavior
class UInputBehavior : public UObject
{
public:
	uint8                                        Pad_997[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputBehavior* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class InteractiveToolsFramework.AnyButtonInputBehavior
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_998[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnyButtonInputBehavior* GetDefaultObj();

};

// 0xC0 (0x140 - 0x80)
// Class InteractiveToolsFramework.ClickDragInputBehavior
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_99A[0xA0];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUpdateModifiersDuringDrag;                        // 0x120(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_99B[0x1F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClickDragInputBehavior* GetDefaultObj();

};

// 0x140 (0x280 - 0x140)
// Class InteractiveToolsFramework.LocalClickDragInputBehavior
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	uint8                                        Pad_99E[0x140];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULocalClickDragInputBehavior* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_9A2[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UKeyAsModifierInputBehavior* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.MouseHoverBehavior
class UMouseHoverBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_9A5[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMouseHoverBehavior* GetDefaultObj();

};

// 0x148 (0x1E0 - 0x98)
// Class InteractiveToolsFramework.LocalMouseHoverBehavior
class ULocalMouseHoverBehavior : public UMouseHoverBehavior
{
public:
	uint8                                        Pad_9AA[0x148];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULocalMouseHoverBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MouseWheelInputBehavior
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_9AD[0xB0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMouseWheelInputBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_9AF[0xB0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMultiClickSequenceInputBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_9B1[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         HitTestOnRelease;                                  // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B2[0x6F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USingleClickInputBehavior* GetDefaultObj();

};

// 0xD0 (0x200 - 0x130)
// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
{
public:
	uint8                                        Pad_9B5[0xD0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULocalSingleClickInputBehavior* GetDefaultObj();

};

// 0x100 (0x180 - 0x80)
// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_9B6[0xA0];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bBeginDragIfClickTargetNotHit;                     // 0x120(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ClickDistanceThreshold;                            // 0x124(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9B8[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USingleClickOrDragInputBehavior* GetDefaultObj();

};

// 0xE0 (0x110 - 0x30)
// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
class USingleKeyCaptureBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_9B9[0xE0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USingleKeyCaptureBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.WidgetBaseBehavior
class IWidgetBaseBehavior : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWidgetBaseBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisAngleGizmoBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public UObject
{
public:
	uint8                                        Pad_9BD[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInteractiveGizmo* GetDefaultObj();

};

// 0x198 (0x1D0 - 0x38)
// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_9BE[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoFloatParameterSource> AngleSource;                                       // 0x58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C1[0x80];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bInInteraction;                                    // 0x110(0x1)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               RotationOrigin;                                    // 0x118(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               RotationAxis;                                      // 0x130(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RotationPlaneX;                                    // 0x148(0x18)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               RotationPlaneY;                                    // 0x160(0x18)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionStartPoint;                             // 0x178(0x18)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionCurPoint;                               // 0x190(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InteractionStartAngle;                             // 0x1A8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InteractionCurAngle;                               // 0x1AC(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C6[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAxisAngleGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisPositionGizmoBuilder* GetDefaultObj();

};

// 0x188 (0x1C0 - 0x38)
// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_9CA[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;                                   // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x68(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x70(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x90(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableSignedAxis;                                 // 0x98(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9CC[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bInInteraction;                                    // 0x121(0x1)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9CD[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionAxis;                                   // 0x140(0x18)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionStartPoint;                             // 0x158(0x18)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionCurPoint;                               // 0x170(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InteractionStartParameter;                         // 0x188(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InteractionCurParameter;                           // 0x18C(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ParameterSign;                                     // 0x190(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9CF[0x2C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAxisPositionGizmo* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public UObject
{
public:
	uint8                                        Pad_9D4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Origin;                                            // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Direction;                                         // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoConstantAxisSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	uint8                                        Pad_9D5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Origin;                                            // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Direction;                                         // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	struct FVector                               TangentX;                                          // 0x60(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               TangentY;                                          // 0x78(0x18)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoConstantFrameAxisSource* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public UObject
{
public:
	uint8                                        Pad_9D8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Origin;                                            // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        AxisIndex;                                         // 0x48(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D9[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoWorldAxisSource* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public UObject
{
public:
	uint8                                        Pad_9DA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       Component;                                         // 0x30(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        AxisIndex;                                         // 0x38(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLocalAxes;                                        // 0x3C(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9DB[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoComponentAxisSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UBrushStampIndicatorBuilder* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	bool                                         bVisible;                                          // 0x38(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_9E8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BrushRadius;                                       // 0x3C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BrushFalloff;                                      // 0x40(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BrushPosition;                                     // 0x48(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               BrushNormal;                                       // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawIndicatorLines;                               // 0x78(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawRadiusCircle;                                 // 0x79(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9ED[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SampleStepCount;                                   // 0x7C(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          LineColor;                                         // 0x80(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        LineThickness;                                     // 0x90(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bDepthTested;                                      // 0x94(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawSecondaryLines;                               // 0x95(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F1[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SecondaryLineThickness;                            // 0x98(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          SecondaryLineColor;                                // 0x9C(0x10)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F6[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrushStampIndicator* GetDefaultObj();

};

// 0x0 (0x4D0 - 0x4D0)
// Class InteractiveToolsFramework.GizmoActor
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class AGizmoActor* GetDefaultObj();

};

// 0x88 (0x558 - 0x4D0)
// Class InteractiveToolsFramework.CombinedTransformGizmoActor
class ACombinedTransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                   TranslateX;                                        // 0x4D0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   TranslateY;                                        // 0x4D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   TranslateZ;                                        // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   TranslateYZ;                                       // 0x4E8(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   TranslateXZ;                                       // 0x4F0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   TranslateXY;                                       // 0x4F8(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   RotateX;                                           // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   RotateY;                                           // 0x508(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   RotateZ;                                           // 0x510(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   RotationSphere;                                    // 0x518(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   UniformScale;                                      // 0x520(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   AxisScaleX;                                        // 0x528(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   AxisScaleY;                                        // 0x530(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   AxisScaleZ;                                        // 0x538(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   PlaneScaleYZ;                                      // 0x540(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   PlaneScaleXZ;                                      // 0x548(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   PlaneScaleXY;                                      // 0x550(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACombinedTransformGizmoActor* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_A07[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoBuilder* GetDefaultObj();

};

// 0x368 (0x3A0 - 0x38)
// Class InteractiveToolsFramework.CombinedTransformGizmo
class UCombinedTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                       ActiveTarget;                                      // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSnapToWorldGrid;                                  // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A09[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bGridSizeIsExplicit;                               // 0x44(0x1)(Edit, ConstParm, ExportObject, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ExplicitGridSize;                                  // 0x48(0x18)(ConstParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRotationGridSizeIsExplicit;                       // 0x60(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              ExplicitRotationGridSize;                          // 0x68(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSnapToWorldRotGrid;                               // 0x80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseContextCoordinateSystem;                       // 0x81(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A10[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EToolContextCoordinateSystem      CurrentCoordinateSystem;                           // 0x84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseContextGizmoMode;                              // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EToolContextTransformGizmoMode    ActiveGizmoMode;                                   // 0x89(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A12[0x126];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0x1B0(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0x1C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A14[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	class UGizmoConstantFrameAxisSource*         CameraAxisSource;                                  // 0x220(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             AxisXSource;                                       // 0x228(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0x230(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0x238(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             UnitAxisXSource;                                   // 0x240(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             UnitAxisYSource;                                   // 0x248(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             UnitAxisZSource;                                   // 0x250(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x258(0x8)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A17[0x140];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCombinedTransformGizmo* GetDefaultObj();

};

// 0x28 (0x6F0 - 0x6C8)
// Class InteractiveToolsFramework.GizmoArrowComponent
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Direction;                                         // 0x6C8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        Gap;                                               // 0x6E0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Length;                                            // 0x6E4(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm)
	float                                        Thickness;                                         // 0x6E8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A1E[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoArrowComponent* GetDefaultObj();

};

// 0x58 (0x720 - 0x6C8)
// Class InteractiveToolsFramework.GizmoBoxComponent
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Origin;                                            // 0x6C8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FQuat                                 Rotation;                                          // 0x6E0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Dimensions;                                        // 0x700(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        LineThickness;                                     // 0x718(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRemoveHiddenLines;                                // 0x71C(0x1)(Edit, ExportObject, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAxisFlip;                                   // 0x71D(0x1)(Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A20[0x2];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoBoxComponent* GetDefaultObj();

};

// 0x28 (0x6F0 - 0x6C8)
// Class InteractiveToolsFramework.GizmoCircleComponent
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x6C8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	float                                        Radius;                                            // 0x6E0(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        Thickness;                                         // 0x6E4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        NumSides;                                          // 0x6E8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bViewAligned;                                      // 0x6EC(0x1)(ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawFullCircle;                                   // 0x6ED(0x1)(Edit, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOnlyAllowFrontFacingHits;                         // 0x6EE(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A23[0x1];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoCircleComponent* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class InteractiveToolsFramework.GizmoElementBase
class UGizmoElementBase : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	bool                                         bEnabledForPerspectiveProjection;                  // 0x29(0x1)(ConstParm, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnabledForOrthographicProjection;                 // 0x2A(0x1)(ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnabledForDefaultState;                           // 0x2B(0x1)(Edit, ConstParm, ExportObject, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnabledForHoveringState;                          // 0x2C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnabledForInteractingState;                       // 0x2D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A25[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       PartIdentifier;                                    // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGizmoElementMeshRenderStateAttributes MeshRenderAttributes;                              // 0x34(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGizmoElementState                ElementState;                                      // 0x94(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A26[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EGizmoElementInteractionState     ElementInteractionState;                           // 0x98(0x4)(ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGizmoElementViewDependentType    ViewDependentType;                                 // 0x9C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ViewDependentAxis;                                 // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ViewDependentAngleTol;                             // 0xB8(0x4)(ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ViewDependentAxialMaxCosAngleTol;                  // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ViewDependentPlanarMinCosAngleTol;                 // 0xC0(0x4)(Edit, BlueprintVisible, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGizmoElementViewAlignType        ViewAlignType;                                     // 0xC4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ViewAlignAxis;                                     // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ViewAlignNormal;                                   // 0xE0(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ViewAlignAxialAngleTol;                            // 0xF8(0x4)(Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ViewAlignAxialMaxCosAngleTol;                      // 0xFC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PixelHitDistanceThreshold;                         // 0x100(0x4)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2D[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementBase* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class InteractiveToolsFramework.GizmoElementLineBase
class UGizmoElementLineBase : public UGizmoElementBase
{
public:
	struct FGizmoElementLineRenderStateAttributes LineRenderAttributes;                              // 0x108(0x3C)(BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LineThickness;                                     // 0x144(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bScreenSpaceLine;                                  // 0x148(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HoverLineThicknessMultiplier;                      // 0x14C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InteractLineThicknessMultiplier;                   // 0x150(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2F[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementLineBase* GetDefaultObj();

};

// 0x70 (0x1C8 - 0x158)
// Class InteractiveToolsFramework.GizmoElementCircleBase
class UGizmoElementCircleBase : public UGizmoElementLineBase
{
public:
	struct FVector                               Center;                                            // 0x158(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Axis0;                                             // 0x170(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               Axis1;                                             // 0x188(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Radius;                                            // 0x1A0(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        NumSegments;                                       // 0x1A8(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EGizmoElementPartialType          PartialType;                                       // 0x1AC(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       PartialStartAngle;                                 // 0x1B0(0x8)(ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       PartialEndAngle;                                   // 0x1B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       PartialViewDependentMaxCosTol;                     // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoElementCircleBase* GetDefaultObj();

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementArc
class UGizmoElementArc : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoElementArc* GetDefaultObj();

};

// 0x80 (0x188 - 0x108)
// Class InteractiveToolsFramework.GizmoElementArrow
class UGizmoElementArrow : public UGizmoElementBase
{
public:
	uint8                                        Pad_A79[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UGizmoElementCylinder*                 CylinderElement;                                   // 0x110(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoElementCone*                     ConeElement;                                       // 0x118(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoElementBox*                      BoxElement;                                        // 0x120(0x8)(EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               Base;                                              // 0x128(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	struct FVector                               Direction;                                         // 0x140(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	struct FVector                               SideDirection;                                     // 0x158(0x18)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BodyLength;                                        // 0x170(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BodyRadius;                                        // 0x174(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        HeadLength;                                        // 0x178(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        HeadRadius;                                        // 0x17C(0x4)(Edit, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumSides;                                          // 0x180(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EGizmoElementArrowHeadType        HeadType;                                          // 0x184(0x4)(Edit, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoElementArrow* GetDefaultObj();

};

// 0x60 (0x168 - 0x108)
// Class InteractiveToolsFramework.GizmoElementBox
class UGizmoElementBox : public UGizmoElementBase
{
public:
	struct FVector                               Center;                                            // 0x108(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Dimensions;                                        // 0x120(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FVector                               UpDirection;                                       // 0x138(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               SideDirection;                                     // 0x150(0x18)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoElementBox* GetDefaultObj();

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementCircle
class UGizmoElementCircle : public UGizmoElementCircleBase
{
public:
	bool                                         bDrawMesh;                                         // 0x1C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawLine;                                         // 0x1C9(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHitMesh;                                          // 0x1CA(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHitLine;                                          // 0x1CB(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A89[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementCircle* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class InteractiveToolsFramework.GizmoElementCone
class UGizmoElementCone : public UGizmoElementBase
{
public:
	struct FVector                               Origin;                                            // 0x108(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Direction;                                         // 0x120(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        Height;                                            // 0x138(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Radius;                                            // 0x13C(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        NumSides;                                          // 0x140(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A8F[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementCone* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class InteractiveToolsFramework.GizmoElementCylinder
class UGizmoElementCylinder : public UGizmoElementBase
{
public:
	struct FVector                               Base;                                              // 0x108(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	struct FVector                               Direction;                                         // 0x120(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        Height;                                            // 0x138(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Radius;                                            // 0x13C(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        NumSides;                                          // 0x140(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A95[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementCylinder* GetDefaultObj();

};

// 0x18 (0x170 - 0x158)
// Class InteractiveToolsFramework.GizmoElementGroup
class UGizmoElementGroup : public UGizmoElementLineBase
{
public:
	bool                                         bConstantScale;                                    // 0x158(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHitOwner;                                         // 0x159(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A99[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UGizmoElementBase*>             Elements;                                          // 0x160(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoElementGroup* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitTarget
class UGizmoElementHitTarget : public UObject
{
public:
	uint8                                        Pad_A9D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_A9E[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementHitTarget* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitMultiTarget
class UGizmoElementHitMultiTarget : public UObject
{
public:
	uint8                                        Pad_A9F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA0[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementHitMultiTarget* GetDefaultObj();

};

// 0x58 (0x1B0 - 0x158)
// Class InteractiveToolsFramework.GizmoElementRectangle
class UGizmoElementRectangle : public UGizmoElementLineBase
{
public:
	struct FVector                               Center;                                            // 0x158(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	float                                        Width;                                             // 0x170(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Height;                                            // 0x174(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	struct FVector                               UpDirection;                                       // 0x178(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               SideDirection;                                     // 0x190(0x18)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawMesh;                                         // 0x1A8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawLine;                                         // 0x1A9(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHitMesh;                                          // 0x1AA(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHitLine;                                          // 0x1AB(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AA9[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementRectangle* GetDefaultObj();

};

// 0x10 (0x1D8 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementTorus
class UGizmoElementTorus : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumInnerSlices;                                    // 0x1D0(0x4)(ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEndCaps;                                          // 0x1D4(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AAE[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoElementTorus* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformSource
class IGizmoTransformSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoTransformSource* GetDefaultObj();

	void SetTransform(struct FTransform* NewTransform);
	struct FTransform GetTransform();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoAxisSource
class IGizmoAxisSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoAxisSource* GetDefaultObj();

	bool HasTangentVectors();
	void GetTangentVectors(const struct FVector& TangentXOut, const struct FVector& TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickTarget
class IGizmoClickTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoClickTarget* GetDefaultObj();

	void UpdateInteractingState(bool bInteracting);
	void UpdateHoverState(bool bHovering);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickMultiTarget
class IGizmoClickMultiTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoClickMultiTarget* GetDefaultObj();

	void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier);
	void UpdateHoverState(bool bHovering, uint32 InPartIdentifier);
	void UpdateHittableState(bool bHittable, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderTarget
class IGizmoRenderTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoRenderTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderMultiTarget
class IGizmoRenderMultiTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoRenderMultiTarget* GetDefaultObj();

	void UpdateVisibilityState(bool* bVisible, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoStateTarget
class IGizmoStateTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoStateTarget* GetDefaultObj();

	void EndUpdate();
	void BeginUpdate();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoFloatParameterSource
class IGizmoFloatParameterSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoFloatParameterSource* GetDefaultObj();

	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoVec2ParameterSource
class IGizmoVec2ParameterSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoVec2ParameterSource* GetDefaultObj();

	void SetParameter(const struct FVector2D& NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};

// 0x48 (0x710 - 0x6C8)
// Class InteractiveToolsFramework.GizmoLineHandleComponent
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x6C8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	float                                        HandleSize;                                        // 0x6E0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Thickness;                                         // 0x6E4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Direction;                                         // 0x6E8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        Length;                                            // 0x700(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm)
	bool                                         bImageScale;                                       // 0x704(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AE9[0xB];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoLineHandleComponent* GetDefaultObj();

};

// 0x58 (0x720 - 0x6C8)
// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               DirectionX;                                        // 0x6C8(0x18)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               DirectionY;                                        // 0x6E0(0x18)(Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOrientYAccordingToCamera;                         // 0x6F8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AEA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OffsetX;                                           // 0x6FC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        OffsetY;                                           // 0x700(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LengthX;                                           // 0x704(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LengthY;                                           // 0x708(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Thickness;                                         // 0x70C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        SegmentFlags;                                      // 0x710(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AEB[0xF];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoRectangleComponent* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class InteractiveToolsFramework.GizmoViewContext
class UGizmoViewContext : public UObject
{
public:
	uint8                                        Pad_AEC[0x1B8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoViewContext* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaHitTarget
class UGizmoLambdaHitTarget : public UObject
{
public:
	uint8                                        Pad_AED[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoLambdaHitTarget* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public UObject
{
public:
	uint8                                        Pad_AF2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   Component;                                         // 0x30(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AF3[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoComponentHitTarget* GetDefaultObj();

};

// 0x18 (0x4E8 - 0x4D0)
// Class InteractiveToolsFramework.IntervalGizmoActor
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*             UpIntervalComponent;                               // 0x4D0(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoLineHandleComponent*             DownIntervalComponent;                             // 0x4D8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoLineHandleComponent*             ForwardIntervalComponent;                          // 0x4E0(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AIntervalGizmoActor* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.IntervalGizmoBuilder
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_AF4[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIntervalGizmoBuilder* GetDefaultObj();

};

// 0x1C8 (0x200 - 0x38)
// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF7[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       TransformProxy;                                    // 0x98(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, EditConst, GlobalConfig)
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0xA0(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0xB0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF8[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0xD8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0xE0(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF9[0x118];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIntervalGizmo* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoFloatParameterSource> FloatParameterSource;                              // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinParameter;                                      // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxParameter;                                      // 0x5C(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoAxisIntervalParameterSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                        Value;                                             // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x4C(0x8)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AFC[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoLocalFloatParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UPlanePositionGizmoBuilder* GetDefaultObj();

};

// 0x238 (0x270 - 0x38)
// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_AFE[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;                                   // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableSignedAxis;                                 // 0x90(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFlipX;                                            // 0x91(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFlipY;                                            // 0x92(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B01[0x8D];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bInInteraction;                                    // 0x120(0x1)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B03[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionNormal;                                 // 0x140(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionAxisX;                                  // 0x158(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionAxisY;                                  // 0x170(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionStartPoint;                             // 0x188(0x18)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InteractionCurPoint;                               // 0x1A0(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             InteractionStartParameter;                         // 0x1B8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             InteractionCurParameter;                           // 0x1C8(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             ParameterSigns;                                    // 0x1D8(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B06[0x88];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlanePositionGizmo* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class URepositionableTransformGizmoBuilder* GetDefaultObj();

};

// 0xA0 (0x440 - 0x3A0)
// Class InteractiveToolsFramework.RepositionableTransformGizmo
class URepositionableTransformGizmo : public UCombinedTransformGizmo
{
public:
	uint8                                        Pad_B08[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	class UGizmoTransformChangeStateTarget*      RepositionStateTarget;                             // 0x430(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B09[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URepositionableTransformGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UScalableSphereGizmoBuilder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class InteractiveToolsFramework.ScalableSphereGizmo
class UScalableSphereGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_B0F[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HitErrorThreshold;                                 // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B10[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  TransactionDescription;                            // 0x88(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0xA0(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsHovering;                                       // 0xA4(0x1)(ConstParm, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsDragging;                                       // 0xA5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B12[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UTransformProxy*                       ActiveTarget;                                      // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ActiveAxis;                                        // 0xB0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               DragStartWorldPosition;                            // 0xC8(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               DragCurrentPositionProjected;                      // 0xE0(0x18)(Edit, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InteractionStartParameter;                         // 0xF8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B13[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScalableSphereGizmo* GetDefaultObj();

};

// 0x50 (0xD0 - 0x80)
// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_B1F[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UScalableSphereGizmoInputBehavior* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.GizmoNilStateTarget
class UGizmoNilStateTarget : public UObject
{
public:
	uint8                                        Pad_B25[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoNilStateTarget* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaStateTarget
class UGizmoLambdaStateTarget : public UObject
{
public:
	uint8                                        Pad_B28[0x88];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoLambdaStateTarget* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	uint8                                        Pad_B2E[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoObjectModifyStateTarget* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	uint8                                        Pad_B31[0x28];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B32[0xE0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoTransformChangeStateTarget* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
class UCombinedTransformGizmoContextObject : public UObject
{
public:
	uint8                                        Pad_B36[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoContextObject* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public UObject
{
public:
	uint8                                        Pad_B46[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bRotatePerObject;                                  // 0xD0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSetPivotMode;                                     // 0xD1(0x1)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B48[0x1E];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            SharedTransform;                                   // 0xF0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            InitialSharedTransform;                            // 0x150(0x60)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformProxy* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseTransformSource
class UGizmoBaseTransformSource : public UObject
{
public:
	uint8                                        Pad_B4D[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoBaseTransformSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                       Component;                                         // 0x48(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bModifyComponentOnTransform;                       // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B5C[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoComponentWorldTransformSource* GetDefaultObj();

};

// 0x98 (0xE0 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ChildTransformSource;                              // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B5F[0x88];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoScaledTransformSource* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                       Proxy;                                             // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_B60[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGizmoTransformProxyTransformSource* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ScaledTransformSource;                             // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TScriptInterface<class IGizmoTransformSource> UnscaledTransformSource;                           // 0x58(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGizmoScaledAndUnscaledTransformSources* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                        BrushSize;                                         // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSpecifyRadius;                                    // 0xAC(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B62[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BrushRadius;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BrushStrength;                                     // 0xB4(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BrushFalloffAmount;                                // 0xB8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowStrength;                                     // 0xBC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowFalloff;                                      // 0xBD(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B63[0x2];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBrushBaseProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ClickDragToolBuilder
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UClickDragToolBuilder* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class InteractiveToolsFramework.ClickDragTool
class UClickDragTool : public UInteractiveTool
{
public:
	uint8                                        Pad_B6D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UClickDragTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SingleClickToolBuilder
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleClickToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.ContextObjectStore
class UContextObjectStore : public UObject
{
public:
	TArray<class UObject*>                       ContextObjects;                                    // 0x28(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UContextObjectStore* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                 Behaviors;                                         // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInputBehaviorSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSource
class IInputBehaviorSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInputBehaviorSource* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class InteractiveToolsFramework.LocalInputBehaviorSource
class ULocalInputBehaviorSource : public UObject
{
public:
	uint8                                        Pad_B94[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULocalInputBehaviorSource* GetDefaultObj();

};

// 0x168 (0x190 - 0x28)
// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public UObject
{
public:
	bool                                         bAutoInvalidateOnHover;                            // 0x28(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAutoInvalidateOnCapture;                          // 0x29(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B96[0xE];                                      // Fixing Size After Last Property  > TateDumper <
	class UInputBehaviorSet*                     ActiveInputBehaviors;                              // 0x38(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B98[0x150];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInputRouter* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public UObject
{
public:
	uint8                                        Pad_B9D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FActiveGizmo>                  ActiveGizmos;                                      // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B9E[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                     // 0x58(0x50)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B9F[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractiveGizmoManager* GetDefaultObj();

};

// 0x170 (0x198 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public UObject
{
public:
	uint8                                        Pad_BA3[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class UInteractiveTool*                      ActiveLeftTool;                                    // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UInteractiveTool*                      ActiveRightTool;                                   // 0x60(0x8)(ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA5[0x80];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                                      // 0xE8(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA6[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractiveToolManager* GetDefaultObj();

};

// 0x308 (0x330 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public UObject
{
public:
	uint8                                        Pad_BA9[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class UInputRouter*                          InputRouter;                                       // 0x58(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig)
	class UToolTargetManager*                    TargetManager;                                     // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UInteractiveToolManager*               ToolManager;                                       // 0x68(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UContextObjectStore*                   ContextObjectStore;                                // 0x78(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig)
	uint8                                        Pad_BAE[0x280];                                    // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UInteractiveToolManager> ToolManagerClass;                                  // 0x300(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInteractiveToolsContext* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.SelectionSet
class USelectionSet : public UObject
{
public:
	uint8                                        Pad_BB0[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USelectionSet* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class InteractiveToolsFramework.MeshSelectionSet
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int32>                                Vertices;                                          // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Edges;                                             // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<int32>                                Faces;                                             // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Groups;                                            // 0x70(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UMeshSelectionSet* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.ToolTargetManager
class UToolTargetManager : public UObject
{
public:
	uint8                                        Pad_BB1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UToolTargetFactory*>            Factories;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UToolTargetManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTarget
class UToolTarget : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolTarget* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
class UPrimitiveComponentToolTarget : public UToolTarget
{
public:
	uint8                                        Pad_BB2[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPrimitiveComponentToolTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTargetFactory
class UToolTargetFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolTargetFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
{
public:

	static class UClass* StaticClass();
	static class UPrimitiveComponentToolTargetFactory* GetDefaultObj();

};

}


