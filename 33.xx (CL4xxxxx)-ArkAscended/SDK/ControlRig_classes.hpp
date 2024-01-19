#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x328 (0x350 - 0x28)
// Class ControlRig.RigHierarchy
class URigHierarchy : public UObject
{
public:
	uint8                                        Pad_FDE[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_FE3[0x99];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TransformStackIndex;                               // 0x128(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_FE5[0x74];                                     // Fixing Size After Last Property  > TateDumper <
	class URigHierarchyController*               HierarchyController;                               // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_FE8[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x200(0x50)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_FEA[0x80];                                     // Fixing Size After Last Property  > TateDumper <
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2D0(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_FEB[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	int32 UnsetCurveValueByIndex(bool bSetupUndo);
	struct FRigElementKey UnsetCurveValue(bool bSetupUndo);
	bool SwitchToWorldSpace(bool bAffectChildren, bool ReturnValue);
	bool SwitchToParent(bool bAffectChildren, bool ReturnValue);
	bool SwitchToDefaultParent(bool bAffectChildren, bool ReturnValue);
	TArray<struct FRigElementKey> SortKeys(const TArray<struct FRigElementKey>& ReturnValue);
	struct FVector SetVectorMetadata(bool ReturnValue);
	TArray<struct FVector> SetVectorArrayMetadata(bool ReturnValue);
	struct FTransform SetTransformMetadata(bool ReturnValue);
	TArray<struct FTransform> SetTransformArrayMetadata(bool ReturnValue);
	class FName SetTag(bool ReturnValue);
	struct FRotator SetRotatorMetadata(bool ReturnValue);
	TArray<struct FRotator> SetRotatorArrayMetadata(bool ReturnValue);
	struct FRigElementKey SetRigElementKeyMetadata(bool ReturnValue);
	TArray<struct FRigElementKey> SetRigElementKeyArrayMetadata(bool ReturnValue);
	struct FQuat SetQuatMetadata(bool ReturnValue);
	TArray<struct FQuat> SetQuatArrayMetadata(bool ReturnValue);
	void SetPose_ForBlueprint(const struct FRigPose& InPose);
	bool SetParentWeightArray(const TArray<struct FRigElementWeight>& InWeights, bool bAffectChildren, bool ReturnValue);
	bool SetParentWeight(const struct FRigElementWeight& InWeight, bool bAffectChildren, bool ReturnValue);
	class FName SetNameMetadata(bool ReturnValue);
	TArray<class FName> SetNameArrayMetadata(bool ReturnValue);
	bool SetLocalTransformByIndex(const struct FTransform& InTransform, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetLocalTransform(const struct FTransform& InTransform, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	struct FLinearColor SetLinearColorMetadata(bool ReturnValue);
	TArray<struct FLinearColor> SetLinearColorArrayMetadata(bool ReturnValue);
	int32 SetInt32Metadata(bool ReturnValue);
	TArray<int32> SetInt32ArrayMetadata(bool ReturnValue);
	bool SetGlobalTransformByIndex(const struct FTransform& InTransform, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetGlobalTransform(const struct FTransform& InTransform, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	float SetFloatMetadata(bool ReturnValue);
	TArray<float> SetFloatArrayMetadata(bool ReturnValue);
	float SetCurveValueByIndex(bool bSetupUndo);
	float SetCurveValue(bool bSetupUndo);
	int32 SetControlVisibilityByIndex(bool bVisibility);
	struct FRigElementKey SetControlVisibility(bool bVisibility);
	enum class ERigControlValueType SetControlValueByIndex(bool bSetupUndo, bool bPrintPythonCommands);
	enum class ERigControlValueType SetControlValue(bool bSetupUndo, bool bPrintPythonCommands);
	bool SetControlShapeTransformByIndex(const struct FTransform& InTransform, bool bSetupUndo);
	bool SetControlShapeTransform(const struct FTransform& InTransform, bool bSetupUndo);
	int32 SetControlSettingsByIndex(const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	struct FRigElementKey SetControlSettings(const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	bool SetControlPreferredRotatorByIndex(bool bFixEulerFlips);
	bool SetControlPreferredRotator(bool bFixEulerFlips);
	bool SetControlOffsetTransformByIndex(const struct FTransform& InTransform, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetControlOffsetTransform(const struct FTransform& InTransform, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetBoolMetadata(bool ReturnValue);
	TArray<bool> SetBoolArrayMetadata(bool ReturnValue);
	bool SendAutoKeyEvent(const struct FRigElementKey& InElement);
	void ResetToDefault();
	enum class ERigElementType ResetPoseToInitial();
	void ResetCurveValues();
	void Reset();
	class FName RemoveMetadata(bool ReturnValue);
	struct FRigElementKey RemoveAllMetadata(bool ReturnValue);
	void Num(int32 ReturnValue);
	struct FVector2D MakeControlValueFromVector2D(const struct FRigControlValue& ReturnValue);
	struct FVector MakeControlValueFromVector(const struct FRigControlValue& ReturnValue);
	struct FTransformNoScale MakeControlValueFromTransformNoScale(const struct FRigControlValue& ReturnValue);
	struct FTransform MakeControlValueFromTransform(const struct FRigControlValue& ReturnValue);
	struct FRotator MakeControlValueFromRotator(const struct FRigControlValue& ReturnValue);
	int32 MakeControlValueFromInt(const struct FRigControlValue& ReturnValue);
	float MakeControlValueFromFloat(const struct FRigControlValue& ReturnValue);
	struct FEulerTransform MakeControlValueFromEulerTransform(const struct FRigControlValue& ReturnValue);
	bool MakeControlValueFromBool(const struct FRigControlValue& ReturnValue);
	int32 IsValidIndex(bool ReturnValue);
	int32 IsSelectedByIndex(bool ReturnValue);
	struct FRigElementKey IsSelected(bool ReturnValue);
	struct FRigElementKey IsProcedural(bool ReturnValue);
	struct FRigElementKey IsParentedTo(bool ReturnValue);
	int32 IsCurveValueSetByIndex(bool ReturnValue);
	struct FRigElementKey IsCurveValueSet(bool ReturnValue);
	void IsControllerAvailable(bool ReturnValue);
	class FName HasTag(bool ReturnValue);
	class FName GetVectorMetadata(const struct FVector& DefaultValue, const struct FVector& ReturnValue);
	struct FRigControlValue GetVectorFromControlValue(const struct FVector& ReturnValue);
	class FName GetVectorArrayMetadata(const TArray<struct FVector>& ReturnValue);
	struct FRigControlValue GetVector2DFromControlValue(const struct FVector2D& ReturnValue);
	struct FRigControlValue GetTransformNoScaleFromControlValue(const struct FTransformNoScale& ReturnValue);
	class FName GetTransformMetadata(const struct FTransform& DefaultValue, const struct FTransform& ReturnValue);
	struct FRigControlValue GetTransformFromControlValue(const struct FTransform& ReturnValue);
	class FName GetTransformArrayMetadata(const TArray<struct FTransform>& ReturnValue);
	struct FRigElementKey GetTags(const TArray<class FName>& ReturnValue);
	enum class ERigElementType GetSelectedKeys(const TArray<struct FRigElementKey>& ReturnValue);
	class FName GetRotatorMetadata(const struct FRotator& DefaultValue, const struct FRotator& ReturnValue);
	struct FRigControlValue GetRotatorFromControlValue(const struct FRotator& ReturnValue);
	class FName GetRotatorArrayMetadata(const TArray<struct FRotator>& ReturnValue);
	void GetRootElementKeys(const TArray<struct FRigElementKey>& ReturnValue);
	bool GetRigidBodyKeys(const TArray<struct FRigElementKey>& ReturnValue);
	class FName GetRigElementKeyMetadata(const struct FRigElementKey& DefaultValue, const struct FRigElementKey& ReturnValue);
	class FName GetRigElementKeyArrayMetadata(const TArray<struct FRigElementKey>& ReturnValue);
	bool GetReferenceKeys(const TArray<struct FRigElementKey>& ReturnValue);
	class FName GetQuatMetadata(const struct FQuat& DefaultValue, const struct FQuat& ReturnValue);
	class FName GetQuatArrayMetadata(const TArray<struct FQuat>& ReturnValue);
	struct FRigElementKey GetPreviousParent(const struct FRigElementKey& ReturnValue);
	struct FRigElementKey GetPreviousName(class FName ReturnValue);
	bool GetPose(const struct FRigPose& ReturnValue);
	bool GetParentWeightArray(const TArray<struct FRigElementWeight>& ReturnValue);
	bool GetParentWeight(const struct FRigElementWeight& ReturnValue);
	bool GetParentTransformByIndex(const struct FTransform& ReturnValue);
	bool GetParentTransform(const struct FTransform& ReturnValue);
	struct FRigElementKey GetParents(bool* bRecursive, const TArray<struct FRigElementKey>& ReturnValue);
	struct FRigElementKey GetNumberOfParents(int32 ReturnValue);
	bool GetNullKeys(const TArray<struct FRigElementKey>& ReturnValue);
	class FName GetNameMetadata(class FName DefaultValue, class FName ReturnValue);
	class FName GetNameArrayMetadata(const TArray<class FName>& ReturnValue);
	class FName GetMetadataType(enum class ERigMetadataType ReturnValue);
	struct FRigElementKey GetMetadataNames(const TArray<class FName>& ReturnValue);
	bool GetLocalTransformByIndex(const struct FTransform& ReturnValue);
	bool GetLocalTransform(const struct FTransform& ReturnValue);
	struct FRigElementKey GetLocalIndex_ForBlueprint(int32 ReturnValue);
	bool GetLocalControlShapeTransformByIndex(const struct FTransform& ReturnValue);
	bool GetLocalControlShapeTransform(const struct FTransform& ReturnValue);
	class FName GetLinearColorMetadata(const struct FLinearColor& DefaultValue, const struct FLinearColor& ReturnValue);
	class FName GetLinearColorArrayMetadata(const TArray<struct FLinearColor>& ReturnValue);
	TArray<int32> GetKeys(const TArray<struct FRigElementKey>& ReturnValue);
	int32 GetKey(const struct FRigElementKey& ReturnValue);
	struct FRigControlValue GetIntFromControlValue(int32 ReturnValue);
	class FName GetInt32Metadata(int32 DefaultValue, int32 ReturnValue);
	class FName GetInt32ArrayMetadata(const TArray<int32>& ReturnValue);
	struct FRigElementKey GetIndex_ForBlueprint(int32 ReturnValue);
	bool GetGlobalTransformByIndex(const struct FTransform& ReturnValue);
	bool GetGlobalTransform(const struct FTransform& ReturnValue);
	bool GetGlobalControlShapeTransformByIndex(const struct FTransform& ReturnValue);
	bool GetGlobalControlShapeTransform(const struct FTransform& ReturnValue);
	bool GetGlobalControlOffsetTransformByIndex(const struct FTransform& ReturnValue);
	bool GetGlobalControlOffsetTransform(const struct FTransform& ReturnValue);
	class FName GetFloatMetadata(float DefaultValue, float ReturnValue);
	struct FRigControlValue GetFloatFromControlValue(float ReturnValue);
	class FName GetFloatArrayMetadata(const TArray<float>& ReturnValue);
	struct FRigElementKey GetFirstParent(const struct FRigElementKey& ReturnValue);
	struct FRigControlValue GetEulerTransformFromControlValue(const struct FEulerTransform& ReturnValue);
	struct FRigElementKey GetDefaultParent(const struct FRigElementKey& ReturnValue);
	int32 GetCurveValueByIndex(float ReturnValue);
	struct FRigElementKey GetCurveValue(float ReturnValue);
	void GetCurveKeys(const TArray<struct FRigElementKey>& ReturnValue);
	enum class ERigControlValueType GetControlValueByIndex(const struct FRigControlValue& ReturnValue);
	enum class ERigControlValueType GetControlValue(const struct FRigControlValue& ReturnValue);
	bool GetControlPreferredRotatorByIndex(const struct FRotator& ReturnValue);
	bool GetControlPreferredRotator(const struct FRotator& ReturnValue);
	void GetController(bool* bCreateIfNeeded, class URigHierarchyController* ReturnValue);
	bool GetControlKeys(const TArray<struct FRigElementKey>& ReturnValue);
	struct FRigElementKey GetChildren(bool* bRecursive, const TArray<struct FRigElementKey>& ReturnValue);
	class FName GetBoolMetadata(bool DefaultValue, bool ReturnValue);
	class FName GetBoolArrayMetadata(const TArray<bool>& ReturnValue);
	bool GetBoneKeys(const TArray<struct FRigElementKey>& ReturnValue);
	bool GetAllKeys_ForBlueprint(const TArray<struct FRigElementKey>& ReturnValue);
	struct FRigElementKey FindNull_ForBlueprintOnly(const struct FRigNullElement& ReturnValue);
	struct FRigElementKey FindControl_ForBlueprintOnly(const struct FRigControlElement& ReturnValue);
	struct FRigElementKey FindBone_ForBlueprintOnly(const struct FRigBoneElement& ReturnValue);
	bool CopyPose();
	class URigHierarchy* CopyHierarchy();
	struct FRigElementKey Contains_ForBlueprint(bool ReturnValue);
};

// 0x38 (0x90 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x88(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformableControlHandle* GetDefaultObj();

};

// 0x278 (0x3F8 - 0x180)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_102E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERigExecutionType                 ExecutionType;                                     // 0x188(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1030[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x18C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x190(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x1E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1033[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x210(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1034[0x90];                                    // Fixing Size After Last Property  > TateDumper <
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x2A8(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	class UControlRig*                           InteractionRig;                                    // 0x308(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	class UClass*                                InteractionRigClass;                               // 0x310(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1036[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x3D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1037[0x1F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	class UClass* SetInteractionRigClass();
	class UControlRig* SetInteractionRig();
	bool SelectControl();
	void RequestConstruction();
	bool OnControlSelectedBP__DelegateSignature(class UControlRig** Rig, struct FRigControlElement* Control);
	class FName IsControlSelected(bool ReturnValue);
	void GetInteractionRigClass(class UClass* ReturnValue);
	void GetInteractionRig(class UControlRig* ReturnValue);
	void GetHostingActor(class AActor* ReturnValue);
	void GetHierarchy(class URigHierarchy* ReturnValue);
	class UClass* FindControlRigs(class UObject* Outer, const TArray<class UControlRig*>& ReturnValue);
	void CurrentControlSelection(const TArray<class FName>& ReturnValue);
	class FName CreateTransformableControlHandle(class UObject* Outer, class UTransformableControlHandle* ReturnValue);
	void ClearControlSelection(bool ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_103C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigAnimInstance* GetDefaultObj();

};

// 0x0 (0x3A0 - 0x3A0)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj();

};

// 0x168 (0x800 - 0x698)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	class UClass*                                ControlRigClass;                                   // 0x698(0x8)(EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x6A0(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x6B0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x6C0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x6D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x6E0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x6F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x700(0x10)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x710(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableLazyEvaluation;                             // 0x720(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_115C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LazyEvaluationPositionThreshold;                   // 0x724(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationRotationThreshold;                   // 0x728(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationScaleThreshold;                      // 0x72C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetTransformBeforeTick;                         // 0x730(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x731(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateRigOnTick;                                  // 0x732(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateInEditor;                                   // 0x733(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDrawBones;                                        // 0x734(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDebugDrawing;                                 // 0x735(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1160[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x738(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1161[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	float Update();
	void SetObjectBinding(class UObject** InObjectToBind);
	void SetMappedElements(TArray<struct FControlRigComponentMappedElement>* NewMappedElements);
	void SetInitialSpaceTransform(class FName* SpaceName, struct FTransform* InitialTransform, enum class EControlRigComponentSpace* Space);
	bool SetInitialBoneTransform(class FName BoneName, struct FTransform* InitialTransform, enum class EControlRigComponentSpace* Space);
	class FName SetControlVector2D(const struct FVector2D& Value);
	class FName SetControlTransform(const struct FTransform& Value, enum class EControlRigComponentSpace* Space);
	class FName SetControlScale(const struct FVector& Value, enum class EControlRigComponentSpace* Space);
	class FName SetControlRotator(const struct FRotator& Value, enum class EControlRigComponentSpace* Space);
	void SetControlRigClass(class UClass** InControlRigClass);
	class FName SetControlPosition(const struct FVector& Value, enum class EControlRigComponentSpace* Space);
	class FName SetControlOffset(struct FTransform* OffsetTransform, enum class EControlRigComponentSpace* Space);
	class FName SetControlInt(int32 Value);
	class FName SetControlFloat(float Value);
	class FName SetControlBool(bool Value);
	bool SetBoneTransform(class FName BoneName, struct FTransform* Transform, enum class EControlRigComponentSpace* Space);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh** InSkeletalMesh);
	void OnPreInitialize(class UControlRigComponent** Component);
	void OnPreForwardsSolve(class UControlRigComponent** Component);
	void OnPreConstruction(class UControlRigComponent** Component);
	void OnPostInitialize(class UControlRigComponent** Component);
	void OnPostForwardsSolve(class UControlRigComponent** Component);
	void OnPostConstruction(class UControlRigComponent** Component);
	void Initialize();
	void GetSpaceTransform(class FName* SpaceName, enum class EControlRigComponentSpace* Space, const struct FTransform& ReturnValue);
	void GetInitialSpaceTransform(class FName* SpaceName, enum class EControlRigComponentSpace* Space, const struct FTransform& ReturnValue);
	void GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace* Space, const struct FTransform& ReturnValue);
	void GetElementNames(enum class ERigElementType* ElementType, const TArray<class FName>& ReturnValue);
	class FName GetControlVector2D(const struct FVector2D& ReturnValue);
	class FName GetControlTransform(enum class EControlRigComponentSpace* Space, const struct FTransform& ReturnValue);
	class FName GetControlScale(enum class EControlRigComponentSpace* Space, const struct FVector& ReturnValue);
	class FName GetControlRotator(enum class EControlRigComponentSpace* Space, const struct FRotator& ReturnValue);
	void GetControlRig(class UControlRig* ReturnValue);
	class FName GetControlPosition(enum class EControlRigComponentSpace* Space, const struct FVector& ReturnValue);
	class FName GetControlOffset(enum class EControlRigComponentSpace* Space, const struct FTransform& ReturnValue);
	class FName GetControlInt(int32 ReturnValue);
	class FName GetControlFloat(float ReturnValue);
	class FName GetControlBool(bool ReturnValue);
	void GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace* Space, const struct FTransform& ReturnValue);
	void GetAbsoluteTime(float ReturnValue);
	void DoesElementExist(class FName* Name, enum class ERigElementType* ElementType, bool ReturnValue);
	void ClearMappedElements();
	void CanExecute(bool ReturnValue);
	TArray<struct FControlRigComponentMappedCurve> AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
	void AddMappedElements(TArray<struct FControlRigComponentMappedElement>* NewMappedElements);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0xB8 (0x580 - 0x4C8)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UClass*                                ControlRigClass;                                   // 0x4D0(0x8)(EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRefreshOnTick;                                    // 0x4D8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSelectable;                                     // 0x4D9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1176[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    MaterialOverride;                                  // 0x4E0(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                ColorParameter;                                    // 0x4E8(0x10)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCastShadows;                                      // 0x4F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1179[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       ActorRootComponent;                                // 0x500(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x508(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	TArray<class FName>                          ControlNames;                                      // 0x538(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x548(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x558(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x568(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  ColorParameterName;                                // 0x578(0x8)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AControlRigControlActor* GetDefaultObj();

	void ResetControlActor();
	void Refresh();
	void Clear();
};

// 0x48 (0x510 - 0x4C8)
// Class ControlRig.ControlRigShapeActor
class AControlRigShapeActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x4C8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4D0(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint32                                       ControlRigIndex;                                   // 0x4D8(0x4)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x4DC(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x4E4(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FName                                  ShapeName;                                         // 0x4EC(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FName                                  ColorParameterName;                                // 0x4F4(0x8)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11A7[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x50C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x50C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11A9[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AControlRigShapeActor* GetDefaultObj();

	bool SetSelected();
	bool SetSelectable();
	bool SetHovered();
	void SetGlobalTransform(const struct FTransform& InTransform);
	bool SetEnabled();
	struct FTransform OnTransformChanged();
	void OnSelectionChanged(bool* bIsSelected);
	bool OnManipulatingChanged();
	void OnHoveredChanged(bool* bIsSelected);
	bool OnEnabledChanged();
	void IsSelectedInEditor(bool ReturnValue);
	void IsHovered(bool ReturnValue);
	void IsEnabled(bool ReturnValue);
	void GetGlobalTransform(const struct FTransform& ReturnValue);
};

// 0x148 (0x170 - 0x28)
// Class ControlRig.ControlRigShapeLibrary
class UControlRigShapeLibrary : public UObject
{
public:
	uint8                                        Pad_11B2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xB0)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xE0(0x30)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0x110(0x30)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  MaterialColorParameter;                            // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x148(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_11B4[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigShapeLibrary* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct FSoftObjectPath                       ControlRigObjectPath;                              // 0x28(0x20)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FControlRigTestDataFrame              Initial;                                           // 0x48(0x90)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FControlRigTestDataFrame>      InputFrames;                                       // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigTestDataFrame>      OutputFrames;                                      // 0xE8(0x10)(OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                FramesToSkip;                                      // 0xF8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11D4[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTestData* GetDefaultObj();

	bool SetupReplay(bool ReturnValue);
	void ReleaseReplay();
	double Record(bool ReturnValue);
	void IsReplaying(bool ReturnValue);
	void IsRecording(bool ReturnValue);
	bool GetTimeRange(const struct FVector2D& ReturnValue);
	void GetPlaybackMode(enum class EControlRigTestDataPlaybackMode ReturnValue);
	bool GetFrameIndexForTime(int32 ReturnValue);
	class FString CreateNewAsset(class UControlRigTestData* ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11DA[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigValidator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UControlRigValidationPass* GetDefaultObj();

};

// 0x10 (0x408 - 0x3F8)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_11DF[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x40 (0x438 - 0x3F8)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x3F8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x408(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11E2[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_127C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Config, EditConst, SubobjectReference)
	uint8                                        Pad_127D[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	TArray<struct FRigElementKey> SetSelection(bool bPrintPythonCommand, bool ReturnValue);
	bool SetParent(bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	class URigHierarchy* SetHierarchy();
	bool SetDisplayName(class FName* InDisplayName, bool bSetupUndo, bool bPrintPythonCommand, class FName ReturnValue);
	struct FRigElementKey SetControlSettings(const struct FRigControlSettings& InSettings, bool bSetupUndo, bool ReturnValue);
	bool SelectElement(bool ReturnValue);
	int32 ReorderElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	bool RenameElement(const struct FRigElementKey& InElement, class FName* InName, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	bool RemoveParent(bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	void RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	bool RemoveAllParents(bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	bool MirrorElements(const struct FRigVMMirrorSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue);
	bool ImportFromText(bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue);
	bool ImportCurves(bool bSetupUndo, bool bPrintPythonCommand, const TArray<struct FRigElementKey>& ReturnValue);
	bool ImportBones(bool bSetupUndo, bool bPrintPythonCommand, const TArray<struct FRigElementKey>& ReturnValue);
	void GetHierarchy(class URigHierarchy* ReturnValue);
	struct FRigElementKey GetControlSettings(const struct FRigControlSettings& ReturnValue);
	TArray<struct FRigElementKey> ExportToText(const class FString& ReturnValue);
	void ExportSelectionToText(const class FString& ReturnValue);
	bool DuplicateElements(bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue);
	struct FRigElementKey DeselectElement(bool ReturnValue);
	void ClearSelection(bool ReturnValue);
	struct FTransform AddRigidBody(class FName* InName, const struct FRigRigidBodySettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	bool AddParent(float InWeight, bool bSetupUndo, bool ReturnValue);
	bool AddNull(class FName* InName, const struct FTransform& InTransform, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	float AddCurve(class FName* InName, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	struct FRigControlValue AddControl_ForBlueprint(class FName* InName, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	enum class ERigBoneType AddBone(class FName* InName, const struct FTransform& InTransform, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	struct FRigElementKey AddAnimationChannel_ForBlueprint(class FName* InName, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_1281[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x68 (0x288 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x30)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x250(0x30)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LastExportedFrameRate;                             // 0x280(0x4)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1285[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_1287[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class UClass*                                ControlRigClass;                                   // 0x1A8(0x8)(EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1C0(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1288[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C8(0x110)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D8(0x50)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x328(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x348(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x358(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_128A[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_128C[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  TrackName;                                         // 0xF8(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigEditorSettings
class UControlRigEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigEditorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ControlRig.ControlRigPoseAsset
class UControlRigPoseAsset : public UObject
{
public:
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(ConstParm, Net, OutParm, ReturnParm, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigPoseAsset* GetDefaultObj();

	bool SelectControls();
	bool SavePose();
	class FName ReplaceControlName(class FName NewName);
	bool PastePose();
	struct FControlRigControlPose GetCurrentPose();
	void GetControlNames(const TArray<class FName>& ReturnValue);
	class FName DoesMirrorMatch(bool ReturnValue);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_129A[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_129C[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSnapSettings* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Config, EditConst, SubobjectReference)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigWorkflowOptions* GetDefaultObj();

	void EnsureAtLeastOneRigElementSelected(bool ReturnValue);
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12A4[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTransformWorkflowOptions* GetDefaultObj();

	class UObject* ProvideWorkflows(const TArray<struct FRigVMUserWorkflow>& ReturnValue);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A6[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  EventNameB;                                        // 0x44(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigPose                              Pose;                                              // 0x50(0x70)(ConstParm, Net, OutParm, ReturnParm, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

}


