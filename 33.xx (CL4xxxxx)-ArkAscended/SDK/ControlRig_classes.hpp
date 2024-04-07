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
	uint8                                        Pad_5BC[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5BE[0x99];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TransformStackIndex;                               // 0x128(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C0[0x74];                                     // Fixing Size After Last Property  > TateDumper <
	class URigHierarchyController*               HierarchyController;                               // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C1[0x58];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x200(0x50)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C5[0x80];                                     // Fixing Size After Last Property  > TateDumper <
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C6[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
	void UnsetCurveValue(struct FRigElementKey* InKey, bool bSetupUndo);
	bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool* bInitial);
	bool SwitchToParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool* bInitial);
	bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool* bInitial);
	TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey>* InKeys);
	bool SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetTag(const struct FRigElementKey& InItem, class FName InTag);
	bool SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	void SetPose_ForBlueprint(struct FRigPose* InPose);
	bool SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool* bInitial);
	bool SetParentWeight(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, const struct FRigElementWeight& InWeight, bool* bInitial);
	bool SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetLocalTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetLocalTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetGlobalTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetGlobalTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	float SetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
	float SetCurveValue(struct FRigElementKey* InKey, bool bSetupUndo);
	void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
	void SetControlVisibility(struct FRigElementKey* InKey, bool bVisibility);
	struct FRigControlValue SetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	struct FRigControlValue SetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	struct FTransform SetControlShapeTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo);
	struct FTransform SetControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo);
	bool SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetControlSettings(struct FRigElementKey* InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands);
	struct FRotator SetControlPreferredRotatorByIndex(int32 InElementIndex, bool* bInitial, bool bFixEulerFlips);
	struct FRotator SetControlPreferredRotator(struct FRigElementKey* InKey, bool* bInitial, bool bFixEulerFlips);
	bool SetControlOffsetTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetControlOffsetTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands);
	bool SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
	void ResetToDefault();
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter);
	void ResetCurveValues();
	void Reset();
	bool RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	bool RemoveAllMetadata(const struct FRigElementKey& InItem);
	int32 Num();
	struct FRigControlValue MakeControlValueFromVector2D();
	struct FRigControlValue MakeControlValueFromVector();
	struct FRigControlValue MakeControlValueFromTransformNoScale();
	struct FRigControlValue MakeControlValueFromTransform();
	struct FRigControlValue MakeControlValueFromRotator();
	struct FRigControlValue MakeControlValueFromInt();
	struct FRigControlValue MakeControlValueFromFloat();
	struct FRigControlValue MakeControlValueFromEulerTransform();
	struct FRigControlValue MakeControlValueFromBool();
	bool IsValidIndex(int32 InElementIndex);
	bool IsSelectedByIndex(int32 InIndex);
	bool IsSelected(struct FRigElementKey* InKey);
	bool IsProcedural(struct FRigElementKey* InKey);
	bool IsParentedTo(const struct FRigElementKey& InChild, struct FRigElementKey* InParent);
	bool IsCurveValueSetByIndex(int32 InElementIndex);
	bool IsCurveValueSet(struct FRigElementKey* InKey);
	bool IsControllerAvailable();
	bool HasTag(const struct FRigElementKey& InItem, class FName InTag);
	struct FVector GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FVector GetVectorFromControlValue();
	TArray<struct FVector> GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FVector2D GetVector2DFromControlValue();
	struct FTransformNoScale GetTransformNoScaleFromControlValue();
	struct FTransform GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FTransform GetTransformFromControlValue();
	TArray<struct FTransform> GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetTags(const struct FRigElementKey& InItem);
	TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter);
	struct FRotator GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FRotator GetRotatorFromControlValue();
	TArray<struct FRotator> GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetRootElementKeys();
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse);
	struct FRigElementKey GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse);
	struct FQuat GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FQuat> GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FRigElementKey GetPreviousParent(struct FRigElementKey* InKey);
	class FName GetPreviousName(struct FRigElementKey* InKey);
	struct FRigPose GetPose(bool* bInitial);
	TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool* bInitial);
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool* bInitial);
	struct FTransform GetParentTransformByIndex(int32 InElementIndex, bool* bInitial);
	struct FTransform GetParentTransform(struct FRigElementKey* InKey, bool* bInitial);
	TArray<struct FRigElementKey> GetParents(struct FRigElementKey* InKey, bool bRecursive);
	int32 GetNumberOfParents(struct FRigElementKey* InKey);
	TArray<struct FRigElementKey> GetNullKeys(bool bTraverse);
	class FName GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	enum class ERigMetadataType GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<class FName> GetMetadataNames(const struct FRigElementKey& InItem);
	struct FTransform GetLocalTransformByIndex(int32 InElementIndex, bool* bInitial);
	struct FTransform GetLocalTransform(struct FRigElementKey* InKey, bool* bInitial);
	int32 GetLocalIndex_ForBlueprint(struct FRigElementKey* InKey);
	struct FTransform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool* bInitial);
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial);
	struct FLinearColor GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FLinearColor> GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetKeys(const TArray<int32>& InElementIndices);
	struct FRigElementKey GetKey(int32 InElementIndex);
	int32 GetIntFromControlValue();
	int32 GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<int32> GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	int32 GetIndex_ForBlueprint(struct FRigElementKey* InKey);
	struct FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool* bInitial);
	struct FTransform GetGlobalTransform(struct FRigElementKey* InKey, bool* bInitial);
	struct FTransform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool* bInitial);
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial);
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool* bInitial);
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey* InKey, bool* bInitial);
	float GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	float GetFloatFromControlValue();
	TArray<float> GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	struct FRigElementKey GetFirstParent(struct FRigElementKey* InKey);
	struct FEulerTransform GetEulerTransformFromControlValue();
	struct FRigElementKey GetDefaultParent(struct FRigElementKey* InKey);
	float GetCurveValueByIndex(int32 InElementIndex);
	float GetCurveValue(struct FRigElementKey* InKey);
	TArray<struct FRigElementKey> GetCurveKeys();
	struct FRigControlValue GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType);
	struct FRigControlValue GetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType InValueType);
	struct FRotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool* bInitial);
	struct FRotator GetControlPreferredRotator(struct FRigElementKey* InKey, bool* bInitial);
	class URigHierarchyController* GetController();
	TArray<struct FRigElementKey> GetControlKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetChildren(struct FRigElementKey* InKey, bool bRecursive);
	bool GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<bool> GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName);
	TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse);
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey* InKey);
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey* InKey);
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey* InKey);
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool* bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy* InHierarchy);
	bool Contains_ForBlueprint(struct FRigElementKey* InKey);
};

// 0x38 (0x90 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x30)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x88(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformableControlHandle* GetDefaultObj();

};

// 0x278 (0x3F8 - 0x180)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_614[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ERigExecutionType                 ExecutionType;                                     // 0x188(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_615[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x18C(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x190(0x50)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x1E0(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x1E8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_618[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x210(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_619[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x2A8(0x60)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UControlRig*                           InteractionRig;                                    // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                InteractionRigClass;                               // 0x310(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_61B[0xC0];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x3D8(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_61D[0x1F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	class UClass* SetInteractionRigClass();
	class UControlRig* SetInteractionRig();
	bool SelectControl();
	void RequestConstruction();
	bool OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, struct FRigControlElement* Control);
	bool IsControlSelected();
	class UClass* GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
	class AActor* GetHostingActor();
	class URigHierarchy* GetHierarchy();
	TArray<class UControlRig*> FindControlRigs(class UObject* Outer);
	TArray<class FName> CurrentControlSelection();
	class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer);
	bool ClearControlSelection();
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_623[0x8];                                      // Fixing Size Of Struct > TateDumper <

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

// 0x160 (0x7F0 - 0x690)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	class UClass*                                ControlRigClass;                                   // 0x690(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x698(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x6A8(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x6B8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x6C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x6D8(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x6E8(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, EditConst, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x6F8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x708(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableLazyEvaluation;                             // 0x718(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_741[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LazyEvaluationPositionThreshold;                   // 0x71C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationRotationThreshold;                   // 0x720(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationScaleThreshold;                      // 0x724(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetTransformBeforeTick;                         // 0x728(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x729(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateRigOnTick;                                  // 0x72A(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateInEditor;                                   // 0x72B(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDrawBones;                                        // 0x72C(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDebugDrawing;                                 // 0x72D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_748[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x730(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_749[0xB8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	float Update();
	class UObject* SetObjectBinding();
	TArray<struct FControlRigComponentMappedElement> SetMappedElements();
	void SetInitialSpaceTransform(class FName* SpaceName, struct FTransform* InitialTransform, enum class EControlRigComponentSpace Space);
	void SetInitialBoneTransform(class FName* BoneName, struct FTransform* InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	class FName SetControlVector2D(struct FVector2D* Value);
	class FName SetControlTransform(struct FTransform* Value, enum class EControlRigComponentSpace Space);
	class FName SetControlScale(struct FVector* Value, enum class EControlRigComponentSpace Space);
	class FName SetControlRotator(struct FRotator* Value, enum class EControlRigComponentSpace Space);
	class UClass* SetControlRigClass();
	class FName SetControlPosition(struct FVector* Value, enum class EControlRigComponentSpace Space);
	class FName SetControlOffset(struct FTransform* OffsetTransform, enum class EControlRigComponentSpace Space);
	class FName SetControlInt(int32* Value);
	class FName SetControlFloat(float* Value);
	class FName SetControlBool(bool* Value);
	float SetBoneTransform(class FName* BoneName, struct FTransform* Transform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	class USkeletalMesh* SetBoneInitialTransformsFromSkeletalMesh();
	class UControlRigComponent* OnPreInitialize();
	class UControlRigComponent* OnPreForwardsSolve();
	class UControlRigComponent* OnPreConstruction();
	class UControlRigComponent* OnPostInitialize();
	class UControlRigComponent* OnPostForwardsSolve();
	class UControlRigComponent* OnPostConstruction();
	void Initialize();
	struct FTransform GetSpaceTransform(class FName* SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialSpaceTransform(class FName* SpaceName, enum class EControlRigComponentSpace Space);
	struct FTransform GetInitialBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space);
	TArray<class FName> GetElementNames(enum class ERigElementType ElementType);
	struct FVector2D GetControlVector2D();
	struct FTransform GetControlTransform(enum class EControlRigComponentSpace Space);
	struct FVector GetControlScale(enum class EControlRigComponentSpace Space);
	struct FRotator GetControlRotator(enum class EControlRigComponentSpace Space);
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition(enum class EControlRigComponentSpace Space);
	struct FTransform GetControlOffset(enum class EControlRigComponentSpace Space);
	int32 GetControlInt();
	float GetControlFloat();
	bool GetControlBool();
	struct FTransform GetBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName* Name, enum class ERigElementType ElementType);
	void ClearMappedElements();
	bool CanExecute();
	TArray<struct FControlRigComponentMappedCurve> AddMappedSkeletalMesh(class USkeletalMeshComponent** SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones);
	TArray<struct FControlRigComponentMappedElement> AddMappedElements();
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent** SkeletalMeshComponent);
};

// 0xB8 (0x578 - 0x4C0)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x4C0(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ControlRigClass;                                   // 0x4C8(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRefreshOnTick;                                    // 0x4D0(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSelectable;                                     // 0x4D1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_761[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    MaterialOverride;                                  // 0x4D8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ColorParameter;                                    // 0x4E0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCastShadows;                                      // 0x4F0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_763[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       ActorRootComponent;                                // 0x4F8(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x500(0x30)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	TArray<class FName>                          ControlNames;                                      // 0x530(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x540(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x550(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x560(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  ColorParameterName;                                // 0x570(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AControlRigControlActor* GetDefaultObj();

	void ResetControlActor();
	void Refresh();
	void Clear();
};

// 0x48 (0x508 - 0x4C0)
// Class ControlRig.ControlRigShapeActor
class AControlRigShapeActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x4C0(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4C8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint32                                       ControlRigIndex;                                   // 0x4D0(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x4D4(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x4DC(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ShapeName;                                         // 0x4E4(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  ColorParameterName;                                // 0x4EC(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_79C[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x504(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x504(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_79E[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AControlRigShapeActor* GetDefaultObj();

	bool SetSelected();
	bool SetSelectable();
	bool SetHovered();
	struct FTransform SetGlobalTransform();
	bool SetEnabled();
	void OnTransformChanged(struct FTransform* NewTransform);
	bool OnSelectionChanged();
	bool OnManipulatingChanged();
	bool OnHoveredChanged();
	bool OnEnabledChanged();
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct FTransform GetGlobalTransform();
};

// 0x148 (0x170 - 0x28)
// Class ControlRig.ControlRigShapeLibrary
class UControlRigShapeLibrary : public UObject
{
public:
	uint8                                        Pad_7A7[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xB0)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xE0(0x30)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0x110(0x30)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  MaterialColorParameter;                            // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x148(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_7A9[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigShapeLibrary* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct FSoftObjectPath                       ControlRigObjectPath;                              // 0x28(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FControlRigTestDataFrame              Initial;                                           // 0x48(0x90)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FControlRigTestDataFrame>      InputFrames;                                       // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigTestDataFrame>      OutputFrames;                                      // 0xE8(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                FramesToSkip;                                      // 0xF8(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x108(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7DB[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTestData* GetDefaultObj();

	bool SetupReplay();
	void ReleaseReplay();
	bool Record();
	bool IsReplaying();
	bool IsRecording();
	struct FVector2D GetTimeRange();
	enum class EControlRigTestDataPlaybackMode GetPlaybackMode();
	int32 GetFrameIndexForTime();
	class UControlRigTestData* CreateNewAsset();
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_7E1[0x30];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_7E9[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x40 (0x438 - 0x3F8)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x3F8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x408(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7EF[0x2F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_96A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_96B[0x6C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	bool SetSelection(TArray<struct FRigElementKey>* InKeys, bool bPrintPythonCommand);
	bool SetParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand);
	void SetHierarchy(class URigHierarchy* InHierarchy);
	class FName SetDisplayName(const struct FRigElementKey& InControl, class FName* InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool SetControlSettings(struct FRigElementKey* InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo);
	bool SelectElement(struct FRigElementKey* InKey, bool bClearSelection);
	bool ReorderElement(const struct FRigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, class FName* InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
	bool RemoveParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
	bool RemoveAllParents(const struct FRigElementKey& InChild, bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> MirrorElements(TArray<struct FRigElementKey>* InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSetupUndo, bool bPrintPythonCommands);
	TArray<struct FRigElementKey> ImportCurves(bool bSetupUndo, bool bPrintPythonCommand);
	TArray<struct FRigElementKey> ImportBones(bool bSetupUndo, bool bPrintPythonCommand);
	class URigHierarchy* GetHierarchy();
	struct FRigControlSettings GetControlSettings(struct FRigElementKey* InKey);
	class FString ExportToText(TArray<struct FRigElementKey>* InKeys);
	class FString ExportSelectionToText();
	TArray<struct FRigElementKey> DuplicateElements(TArray<struct FRigElementKey>* InKeys, bool bSetupUndo, bool bPrintPythonCommands);
	bool DeselectElement(struct FRigElementKey* InKey);
	bool ClearSelection();
	struct FRigElementKey AddRigidBody(class FName* InName, struct FRigElementKey* InParent, const struct FRigRigidBodySettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
	bool AddParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, float InWeight, bool bSetupUndo);
	struct FRigElementKey AddNull(class FName* InName, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddCurve(class FName* InName, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddControl_ForBlueprint(class FName* InName, struct FRigElementKey* InParent, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddBone(class FName* InName, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand);
	struct FRigElementKey AddAnimationChannel_ForBlueprint(class FName* InName, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_992[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x68 (0x288 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x30)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x250(0x30)(BlueprintVisible, Net, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LastExportedFrameRate;                             // 0x280(0x4)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A0[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_9A4[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	class UClass*                                ControlRigClass;                                   // 0x1A8(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1C0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9A9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C8(0x110)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D8(0x50)(Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x328(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x348(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x358(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_9AD[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_9B7[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TrackName;                                         // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)

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
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigPoseAsset* GetDefaultObj();

	class UControlRig* SelectControls(bool* bDoMirror);
	class UControlRig* SavePose(bool* bUseAll);
	void ReplaceControlName(class FName* CurrentName, class FName* NewName);
	class UControlRig* PastePose(bool* bDoKey, bool* bDoMirror);
	class UControlRig* GetCurrentPose(struct FControlRigControlPose* OutPose);
	TArray<class FName> GetControlNames();
	bool DoesMirrorMatch(class UControlRig** ControlRig);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_A16[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A26[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSnapSettings* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigWorkflowOptions* GetDefaultObj();

	bool EnsureAtLeastOneRigElementSelected();
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A3A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTransformWorkflowOptions* GetDefaultObj();

	TArray<struct FRigVMUserWorkflow> ProvideWorkflows(class UObject** InSubject);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A3D[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  EventNameB;                                        // 0x44(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A40[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigPose                              Pose;                                              // 0x50(0x70)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

}


