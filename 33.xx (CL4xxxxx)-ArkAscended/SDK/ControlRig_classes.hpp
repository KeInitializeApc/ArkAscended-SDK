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
	uint8                                        Pad_1059[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_105A[0x99];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        TransformStackIndex;                               // 0x128(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_105C[0x74];                                    // Fixing Size After Last Property  > TateDumper <
	class URigHierarchyController*               HierarchyController;                               // 0x1A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_105D[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x200(0x50)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_105E[0x80];                                    // Fixing Size After Last Property  > TateDumper <
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2D0(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_105F[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	bool UnsetCurveValueByIndex(int32* InElementIndex);
	bool UnsetCurveValue(struct FRigElementKey* InKey);
	bool SwitchToWorldSpace(struct FRigElementKey* InChild, bool* bAffectChildren, bool ReturnValue);
	bool SwitchToParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bAffectChildren, bool ReturnValue);
	bool SwitchToDefaultParent(struct FRigElementKey* InChild, bool* bAffectChildren, bool ReturnValue);
	TArray<struct FRigElementKey> SortKeys(const TArray<struct FRigElementKey>& ReturnValue);
	struct FVector SetVectorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<struct FVector> SetVectorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	struct FTransform SetTransformMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<struct FTransform> SetTransformArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	void SetTag(struct FRigElementKey* InItem, class FName* InTag, bool ReturnValue);
	struct FRotator SetRotatorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<struct FRotator> SetRotatorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	struct FRigElementKey SetRigElementKeyMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<struct FRigElementKey> SetRigElementKeyArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	struct FQuat SetQuatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<struct FQuat> SetQuatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	struct FRigPose SetPose_ForBlueprint();
	bool SetParentWeightArray(struct FRigElementKey* InChild, bool* bAffectChildren, bool ReturnValue);
	bool SetParentWeight(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bAffectChildren, bool ReturnValue);
	class FName SetNameMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<class FName> SetNameArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	bool SetLocalTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform, bool* bAffectChildren);
	bool SetLocalTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform, bool* bAffectChildren);
	struct FLinearColor SetLinearColorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<struct FLinearColor> SetLinearColorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	int32 SetInt32Metadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<int32> SetInt32ArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	bool SetGlobalTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform, bool* bAffectChildren);
	bool SetGlobalTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform, bool* bAffectChildren);
	float SetFloatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<float> SetFloatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	bool SetCurveValueByIndex(int32* InElementIndex);
	bool SetCurveValue(struct FRigElementKey* InKey);
	bool SetControlVisibilityByIndex(int32* InElementIndex);
	bool SetControlVisibility(struct FRigElementKey* InKey);
	bool SetControlValueByIndex(int32* InElementIndex, enum class ERigControlValueType* InValueType);
	bool SetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType* InValueType);
	bool SetControlShapeTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform);
	bool SetControlShapeTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform);
	bool SetControlSettingsByIndex(int32* InElementIndex, bool bForce);
	bool SetControlSettings(struct FRigElementKey* InKey, bool bForce);
	bool SetControlPreferredRotatorByIndex(int32* InElementIndex);
	bool SetControlPreferredRotator(struct FRigElementKey* InKey);
	bool SetControlOffsetTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform, bool* bAffectChildren);
	bool SetControlOffsetTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform, bool* bAffectChildren);
	bool SetBoolMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	TArray<bool> SetBoolArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	struct FRigElementKey SendAutoKeyEvent(float* InOffsetInSeconds, bool* bAsynchronous);
	void ResetToDefault();
	void ResetPoseToInitial(enum class ERigElementType* InTypeFilter);
	void ResetCurveValues();
	void Reset();
	void RemoveMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue);
	void RemoveAllMetadata(struct FRigElementKey* InItem, bool ReturnValue);
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
	void IsValidIndex(int32* InElementIndex, bool ReturnValue);
	void IsSelectedByIndex(int32* InIndex, bool ReturnValue);
	void IsSelected(struct FRigElementKey* InKey, bool ReturnValue);
	void IsProcedural(struct FRigElementKey* InKey, bool ReturnValue);
	void IsParentedTo(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool ReturnValue);
	void IsCurveValueSetByIndex(int32* InElementIndex, bool ReturnValue);
	void IsCurveValueSet(struct FRigElementKey* InKey, bool ReturnValue);
	void IsControllerAvailable(bool ReturnValue);
	void HasTag(struct FRigElementKey* InItem, class FName* InTag, bool ReturnValue);
	void GetVectorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FVector* DefaultValue, const struct FVector& ReturnValue);
	struct FRigControlValue GetVectorFromControlValue(const struct FVector& ReturnValue);
	void GetVectorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FVector>& ReturnValue);
	struct FRigControlValue GetVector2DFromControlValue(const struct FVector2D& ReturnValue);
	struct FRigControlValue GetTransformNoScaleFromControlValue(const struct FTransformNoScale& ReturnValue);
	void GetTransformMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FTransform* DefaultValue, const struct FTransform& ReturnValue);
	struct FRigControlValue GetTransformFromControlValue(const struct FTransform& ReturnValue);
	void GetTransformArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FTransform>& ReturnValue);
	void GetTags(struct FRigElementKey* InItem, const TArray<class FName>& ReturnValue);
	void GetSelectedKeys(enum class ERigElementType* InTypeFilter, const TArray<struct FRigElementKey>& ReturnValue);
	void GetRotatorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FRotator* DefaultValue, const struct FRotator& ReturnValue);
	struct FRigControlValue GetRotatorFromControlValue(const struct FRotator& ReturnValue);
	void GetRotatorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FRotator>& ReturnValue);
	void GetRootElementKeys(const TArray<struct FRigElementKey>& ReturnValue);
	void GetRigidBodyKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetRigElementKeyMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FRigElementKey* DefaultValue, const struct FRigElementKey& ReturnValue);
	void GetRigElementKeyArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FRigElementKey>& ReturnValue);
	void GetReferenceKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetQuatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FQuat* DefaultValue, const struct FQuat& ReturnValue);
	void GetQuatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FQuat>& ReturnValue);
	void GetPreviousParent(struct FRigElementKey* InKey, const struct FRigElementKey& ReturnValue);
	void GetPreviousName(struct FRigElementKey* InKey, class FName ReturnValue);
	bool GetPose(const struct FRigPose& ReturnValue);
	bool GetParentWeightArray(struct FRigElementKey* InChild, const TArray<struct FRigElementWeight>& ReturnValue);
	bool GetParentWeight(struct FRigElementKey* InChild, struct FRigElementKey* InParent, const struct FRigElementWeight& ReturnValue);
	bool GetParentTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue);
	bool GetParentTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue);
	bool GetParents(struct FRigElementKey* InKey, const TArray<struct FRigElementKey>& ReturnValue);
	void GetNumberOfParents(struct FRigElementKey* InKey, int32 ReturnValue);
	void GetNullKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetNameMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, class FName* DefaultValue, class FName ReturnValue);
	void GetNameArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<class FName>& ReturnValue);
	void GetMetadataType(struct FRigElementKey* InItem, class FName* InMetadataName, enum class ERigMetadataType ReturnValue);
	void GetMetadataNames(struct FRigElementKey* InItem, const TArray<class FName>& ReturnValue);
	bool GetLocalTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue);
	bool GetLocalTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue);
	void GetLocalIndex_ForBlueprint(struct FRigElementKey* InKey, int32 ReturnValue);
	bool GetLocalControlShapeTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue);
	bool GetLocalControlShapeTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue);
	void GetLinearColorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FLinearColor* DefaultValue, const struct FLinearColor& ReturnValue);
	void GetLinearColorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FLinearColor>& ReturnValue);
	void GetKeys(TArray<int32>* InElementIndices, const TArray<struct FRigElementKey>& ReturnValue);
	void GetKey(int32* InElementIndex, const struct FRigElementKey& ReturnValue);
	struct FRigControlValue GetIntFromControlValue(int32 ReturnValue);
	void GetInt32Metadata(struct FRigElementKey* InItem, class FName* InMetadataName, int32* DefaultValue, int32 ReturnValue);
	void GetInt32ArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<int32>& ReturnValue);
	void GetIndex_ForBlueprint(struct FRigElementKey* InKey, int32 ReturnValue);
	bool GetGlobalTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue);
	bool GetGlobalTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue);
	bool GetGlobalControlShapeTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue);
	bool GetGlobalControlShapeTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue);
	bool GetGlobalControlOffsetTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue);
	bool GetGlobalControlOffsetTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue);
	void GetFloatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, float* DefaultValue, float ReturnValue);
	struct FRigControlValue GetFloatFromControlValue(float ReturnValue);
	void GetFloatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<float>& ReturnValue);
	void GetFirstParent(struct FRigElementKey* InKey, const struct FRigElementKey& ReturnValue);
	struct FRigControlValue GetEulerTransformFromControlValue(const struct FEulerTransform& ReturnValue);
	void GetDefaultParent(struct FRigElementKey* InKey, const struct FRigElementKey& ReturnValue);
	void GetCurveValueByIndex(int32* InElementIndex, float ReturnValue);
	void GetCurveValue(struct FRigElementKey* InKey, float ReturnValue);
	void GetCurveKeys(const TArray<struct FRigElementKey>& ReturnValue);
	void GetControlValueByIndex(int32* InElementIndex, enum class ERigControlValueType* InValueType, const struct FRigControlValue& ReturnValue);
	void GetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType* InValueType, const struct FRigControlValue& ReturnValue);
	bool GetControlPreferredRotatorByIndex(int32* InElementIndex, const struct FRotator& ReturnValue);
	bool GetControlPreferredRotator(struct FRigElementKey* InKey, const struct FRotator& ReturnValue);
	void GetController(bool bCreateIfNeeded, class URigHierarchyController* ReturnValue);
	void GetControlKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	bool GetChildren(struct FRigElementKey* InKey, const TArray<struct FRigElementKey>& ReturnValue);
	void GetBoolMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool* DefaultValue, bool ReturnValue);
	void GetBoolArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<bool>& ReturnValue);
	void GetBoneKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetAllKeys_ForBlueprint(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void FindNull_ForBlueprintOnly(struct FRigElementKey* InKey, const struct FRigNullElement& ReturnValue);
	void FindControl_ForBlueprintOnly(struct FRigElementKey* InKey, const struct FRigControlElement& ReturnValue);
	void FindBone_ForBlueprintOnly(struct FRigElementKey* InKey, const struct FRigBoneElement& ReturnValue);
	bool CopyPose(class URigHierarchy** InHierarchy, bool* bCurrent, bool* bWeights, bool* bMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy** InHierarchy);
	void Contains_ForBlueprint(struct FRigElementKey* InKey, bool ReturnValue);
};

// 0x38 (0x90 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x30)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x88(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformableControlHandle* GetDefaultObj();

};

// 0x278 (0x3F8 - 0x180)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_10FB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERigExecutionType                 ExecutionType;                                     // 0x188(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_10FD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x18C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x190(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x1E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x1E8(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_10FF[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1100[0x90];                                    // Fixing Size After Last Property  > TateDumper <
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x2A8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UControlRig*                           InteractionRig;                                    // 0x308(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                InteractionRigClass;                               // 0x310(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1103[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x3D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1104[0x1F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	void SetInteractionRigClass(class UClass** InInteractionRigClass);
	void SetInteractionRig(class UControlRig** InInteractionRig);
	class FName SelectControl(bool* bSelect);
	void RequestConstruction();
	bool OnControlSelectedBP__DelegateSignature(struct FRigControlElement* Control);
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
	uint8                                        Pad_110B[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class UClass*                                ControlRigClass;                                   // 0x698(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x6A0(0x10)(Edit, BlueprintReadOnly, Net, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x6B0(0x10)(BlueprintVisible, Net, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x6C0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x6D0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x6E0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x6F0(0x10)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x700(0x10)(Edit, ExportObject, BlueprintReadOnly, InstancedReference, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x710(0x10)(Edit, BlueprintReadOnly, InstancedReference, SubobjectReference)
	bool                                         bEnableLazyEvaluation;                             // 0x720(0x1)(Edit, BlueprintVisible, InstancedReference, SubobjectReference)
	uint8                                        Pad_11FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LazyEvaluationPositionThreshold;                   // 0x724(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationRotationThreshold;                   // 0x728(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationScaleThreshold;                      // 0x72C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bResetTransformBeforeTick;                         // 0x730(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x731(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUpdateRigOnTick;                                  // 0x732(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUpdateInEditor;                                   // 0x733(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawBones;                                        // 0x734(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowDebugDrawing;                                 // 0x735(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11FF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x738(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1200[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	float Update();
	class UObject* SetObjectBinding();
	TArray<struct FControlRigComponentMappedElement> SetMappedElements();
	struct FTransform SetInitialSpaceTransform(enum class EControlRigComponentSpace Space);
	bool SetInitialBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space);
	class FName SetControlVector2D(struct FVector2D* Value);
	class FName SetControlTransform(struct FTransform* Value, enum class EControlRigComponentSpace Space);
	class FName SetControlScale(struct FVector* Value, enum class EControlRigComponentSpace Space);
	class FName SetControlRotator(struct FRotator* Value, enum class EControlRigComponentSpace Space);
	class UClass* SetControlRigClass();
	class FName SetControlPosition(struct FVector* Value, enum class EControlRigComponentSpace Space);
	struct FTransform SetControlOffset(enum class EControlRigComponentSpace Space);
	class FName SetControlInt(int32* Value);
	class FName SetControlFloat(float* Value);
	class FName SetControlBool(bool* Value);
	bool SetBoneTransform(class FName* BoneName, struct FTransform* Transform, enum class EControlRigComponentSpace Space, float* Weight);
	class USkeletalMesh* SetBoneInitialTransformsFromSkeletalMesh();
	void OnPreInitialize(class UControlRigComponent* Component);
	void OnPreForwardsSolve(class UControlRigComponent* Component);
	void OnPreConstruction(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void OnPostForwardsSolve(class UControlRigComponent* Component);
	void OnPostConstruction(class UControlRigComponent* Component);
	void Initialize();
	class FName GetSpaceTransform(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	class FName GetInitialSpaceTransform(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetInitialBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetElementNames(enum class ERigElementType ElementType, const TArray<class FName>& ReturnValue);
	class FName GetControlVector2D(const struct FVector2D& ReturnValue);
	class FName GetControlTransform(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	class FName GetControlScale(enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue);
	class FName GetControlRotator(enum class EControlRigComponentSpace Space, const struct FRotator& ReturnValue);
	void GetControlRig(class UControlRig* ReturnValue);
	class FName GetControlPosition(enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue);
	class FName GetControlOffset(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	class FName GetControlInt(int32 ReturnValue);
	class FName GetControlFloat(float ReturnValue);
	class FName GetControlBool(bool ReturnValue);
	void GetBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetAbsoluteTime(float ReturnValue);
	void DoesElementExist(class FName* Name, enum class ERigElementType ElementType, bool ReturnValue);
	void ClearMappedElements();
	void CanExecute(bool ReturnValue);
	class USkeletalMeshComponent* AddMappedSkeletalMesh(TArray<struct FControlRigComponentMappedBone>* Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves);
	TArray<struct FControlRigComponentMappedElement> AddMappedElements();
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	class USkeletalMeshComponent* AddMappedCompleteSkeletalMesh();
};

// 0xB8 (0x580 - 0x4C8)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x4C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ControlRigClass;                                   // 0x4D0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRefreshOnTick;                                    // 0x4D8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	bool                                         bIsSelectable;                                     // 0x4D9(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	uint8                                        Pad_1214[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    MaterialOverride;                                  // 0x4E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ColorParameter;                                    // 0x4E8(0x10)(Edit, ExportObject, Net, EditFixedSize, InstancedReference, SubobjectReference)
	bool                                         bCastShadows;                                      // 0x4F8(0x1)(ConstParm, Net, EditFixedSize, InstancedReference, SubobjectReference)
	uint8                                        Pad_1217[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       ActorRootComponent;                                // 0x500(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x508(0x30)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	TArray<class FName>                          ControlNames;                                      // 0x538(0x10)(Edit, BlueprintReadOnly, EditFixedSize, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x548(0x10)(ExportObject, EditFixedSize, InstancedReference, SubobjectReference)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x558(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x568(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	class FName                                  ColorParameterName;                                // 0x578(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, InstancedReference, SubobjectReference)

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
	class USceneComponent*                       ActorRootComponent;                                // 0x4C8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4D0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint32                                       ControlRigIndex;                                   // 0x4D8(0x4)(ConstParm, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x4DC(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x4E4(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  ShapeName;                                         // 0x4EC(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  ColorParameterName;                                // 0x4F4(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, InstancedReference, SubobjectReference)
	uint8                                        Pad_1260[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x50C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x50C(0x1)(Edit, BlueprintVisible, Net, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1261[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AControlRigShapeActor* GetDefaultObj();

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(const struct FTransform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(struct FTransform* NewTransform);
	void OnSelectionChanged(bool* bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool* bIsSelected);
	void OnEnabledChanged(bool* bIsEnabled);
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
	uint8                                        Pad_126B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xB0)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xE0(0x30)(ConstParm, ExportObject, Net, OutParm, Transient, Config, GlobalConfig)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0x110(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
	class FName                                  MaterialColorParameter;                            // 0x140(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x148(0x10)(Edit, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_126D[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigShapeLibrary* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct FSoftObjectPath                       ControlRigObjectPath;                              // 0x28(0x20)(BlueprintVisible, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	struct FControlRigTestDataFrame              Initial;                                           // 0x48(0x90)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FControlRigTestDataFrame>      InputFrames;                                       // 0xD8(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, InstancedReference, SubobjectReference)
	TArray<struct FControlRigTestDataFrame>      OutputFrames;                                      // 0xE8(0x10)(ConstParm, BlueprintVisible, OutParm, InstancedReference, SubobjectReference)
	TArray<int32>                                FramesToSkip;                                      // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x108(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_128B[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTestData* GetDefaultObj();

	void SetupReplay(class UControlRig* InControlRig, bool bGroundTruth, bool ReturnValue);
	void ReleaseReplay();
	void Record(class UControlRig* InControlRig, double InRecordingDuration, bool ReturnValue);
	void IsReplaying(bool ReturnValue);
	void IsRecording(bool ReturnValue);
	void GetTimeRange(bool bInput, const struct FVector2D& ReturnValue);
	void GetPlaybackMode(enum class EControlRigTestDataPlaybackMode ReturnValue);
	void GetFrameIndexForTime(double InSeconds, bool bInput, int32 ReturnValue);
	void CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName, class UControlRigTestData* ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_128E[0x30];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_1293[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x40 (0x438 - 0x3F8)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x3F8(0x10)(Edit, ConstParm, Net, OutParm, InstancedReference, SubobjectReference)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x408(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1296[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1378[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_1379[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	bool SetSelection(bool ReturnValue);
	bool SetParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bMaintainGlobalTransform, bool ReturnValue);
	void SetHierarchy(class URigHierarchy** InHierarchy);
	bool SetDisplayName(struct FRigElementKey* InControl, bool* bRenameElement, class FName ReturnValue);
	bool SetControlSettings(struct FRigElementKey* InKey, bool ReturnValue);
	void SelectElement(struct FRigElementKey* InKey, bool* bSelect, bool* bClearSelection, bool ReturnValue);
	bool ReorderElement(int32* InIndex, bool ReturnValue);
	bool RenameElement(bool* bClearSelection, const struct FRigElementKey& ReturnValue);
	bool RemoveParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bMaintainGlobalTransform, bool ReturnValue);
	bool RemoveElement(bool ReturnValue);
	bool RemoveAllParents(struct FRigElementKey* InChild, bool* bMaintainGlobalTransform, bool ReturnValue);
	bool MirrorElements(bool* bSelectNewElements, const TArray<struct FRigElementKey>& ReturnValue);
	bool ImportFromText(class FString* InContent, bool* bReplaceExistingElements, bool* bSelectNewElements, const TArray<struct FRigElementKey>& ReturnValue);
	bool ImportCurves(class USkeleton** InSkeleton, class FName* InNameSpace, bool* bSelectCurves, const TArray<struct FRigElementKey>& ReturnValue);
	bool ImportBones(class USkeleton** InSkeleton, class FName* InNameSpace, bool* bReplaceExistingBones, bool* bRemoveObsoleteBones, bool* bSelectBones, const TArray<struct FRigElementKey>& ReturnValue);
	void GetHierarchy(class URigHierarchy* ReturnValue);
	void GetControlSettings(struct FRigElementKey* InKey, const struct FRigControlSettings& ReturnValue);
	TArray<struct FRigElementKey> ExportToText(const class FString& ReturnValue);
	void ExportSelectionToText(const class FString& ReturnValue);
	bool DuplicateElements(bool* bSelectNewElements, const TArray<struct FRigElementKey>& ReturnValue);
	void DeselectElement(struct FRigElementKey* InKey, bool ReturnValue);
	void ClearSelection(bool ReturnValue);
	bool AddRigidBody(struct FRigElementKey* InParent, struct FTransform* InLocalTransform, const struct FRigElementKey& ReturnValue);
	bool AddParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bMaintainGlobalTransform, bool ReturnValue);
	bool AddNull(struct FRigElementKey* InParent, const struct FTransform& InTransform, bool* bTransformInGlobal, const struct FRigElementKey& ReturnValue);
	bool AddCurve(const struct FRigElementKey& ReturnValue);
	bool AddControl_ForBlueprint(struct FRigElementKey* InParent, const struct FRigElementKey& ReturnValue);
	bool AddBone(struct FRigElementKey* InParent, const struct FTransform& InTransform, bool* bTransformInGlobal, enum class ERigBoneType* InBoneType, const struct FRigElementKey& ReturnValue);
	bool AddAnimationChannel_ForBlueprint(struct FRigElementKey* InParentControl, const struct FRigElementKey& ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_1389[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x68 (0x288 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x30)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x250(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        LastExportedFrameRate;                             // 0x280(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1390[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_1393[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UClass*                                ControlRigClass;                                   // 0x1A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1C0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1397[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C8(0x110)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D8(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x328(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x348(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x358(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1398[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_139E[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TrackName;                                         // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigPoseAsset* GetDefaultObj();

	void SelectControls(class UControlRig* InControlRig, bool* bDoMirror);
	void SavePose(class UControlRig* InControlRig, bool* bUseAll);
	void ReplaceControlName(class FName* CurrentName, class FName* NewName);
	void PastePose(class UControlRig* InControlRig, bool* bDoKey, bool* bDoMirror);
	void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);
	void GetControlNames(const TArray<class FName>& ReturnValue);
	class FName DoesMirrorMatch(class UControlRig** ControlRig, bool ReturnValue);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_13DA[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_13E4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSnapSettings* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigWorkflowOptions* GetDefaultObj();

	void EnsureAtLeastOneRigElementSelected(bool ReturnValue);
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_143F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTransformWorkflowOptions* GetDefaultObj();

	void ProvideWorkflows(class UObject** InSubject, const TArray<struct FRigVMUserWorkflow>& ReturnValue);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1446[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FName                                  EventNameB;                                        // 0x44(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_144B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigPose                              Pose;                                              // 0x50(0x70)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

}


