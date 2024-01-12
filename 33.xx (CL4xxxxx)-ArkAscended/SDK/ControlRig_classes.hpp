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
	uint8                                        Pad_10BD[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10BF[0x99];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        TransformStackIndex;                               // 0x128(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10C0[0x74];                                    // Fixing Size After Last Property  > TateDumper <
	class URigHierarchyController*               HierarchyController;                               // 0x1A0(0x8)(Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10C1[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x200(0x50)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10C4[0x80];                                    // Fixing Size After Last Property  > TateDumper <
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10C6[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	bool UnsetCurveValueByIndex(int32* InElementIndex);
	bool UnsetCurveValue(struct FRigElementKey* InKey);
	bool SwitchToWorldSpace(bool* bInitial);
	bool SwitchToParent(const struct FRigElementKey& InParent, bool* bInitial);
	bool SwitchToDefaultParent(bool* bInitial);
	TArray<struct FRigElementKey> SortKeys();
	bool SetVectorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetVectorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetTransformMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetTransformArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetTag(struct FRigElementKey* InItem);
	bool SetRotatorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetRotatorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetRigElementKeyMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetRigElementKeyArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetQuatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetQuatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	void SetPose_ForBlueprint(const struct FRigPose& InPose);
	bool SetParentWeightArray(bool* bInitial);
	bool SetParentWeight(const struct FRigElementKey& InParent, bool* bInitial);
	bool SetNameMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetNameArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetLocalTransformByIndex(int32* InElementIndex, bool* bInitial);
	bool SetLocalTransform(struct FRigElementKey* InKey, bool* bInitial);
	bool SetLinearColorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetLinearColorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetInt32Metadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetInt32ArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetGlobalTransformByIndex(int32* InElementIndex, bool* bInitial);
	bool SetGlobalTransform(struct FRigElementKey* InKey, bool* bInitial);
	bool SetFloatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetFloatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetCurveValueByIndex(int32* InElementIndex);
	bool SetCurveValue(struct FRigElementKey* InKey);
	bool SetControlVisibilityByIndex(int32* InElementIndex);
	bool SetControlVisibility(struct FRigElementKey* InKey);
	bool SetControlValueByIndex(int32* InElementIndex);
	bool SetControlValue(struct FRigElementKey* InKey);
	bool SetControlShapeTransformByIndex(int32* InElementIndex, bool* bInitial);
	bool SetControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial);
	bool SetControlSettingsByIndex(int32* InElementIndex, bool* bForce);
	bool SetControlSettings(struct FRigElementKey* InKey, bool* bForce);
	bool SetControlPreferredRotatorByIndex(int32* InElementIndex, bool* bInitial);
	bool SetControlPreferredRotator(struct FRigElementKey* InKey, bool* bInitial);
	bool SetControlOffsetTransformByIndex(int32* InElementIndex, bool* bInitial);
	bool SetControlOffsetTransform(struct FRigElementKey* InKey, bool* bInitial);
	bool SetBoolMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SetBoolArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool SendAutoKeyEvent();
	void ResetToDefault();
	enum class ERigElementType ResetPoseToInitial();
	void ResetCurveValues();
	void Reset();
	bool RemoveMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	bool RemoveAllMetadata(struct FRigElementKey* InItem);
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
	bool IsValidIndex(int32* InElementIndex);
	bool IsSelectedByIndex();
	bool IsSelected(struct FRigElementKey* InKey);
	bool IsProcedural(struct FRigElementKey* InKey);
	bool IsParentedTo(const struct FRigElementKey& InParent);
	bool IsCurveValueSetByIndex(int32* InElementIndex);
	bool IsCurveValueSet(struct FRigElementKey* InKey);
	bool IsControllerAvailable();
	bool HasTag(struct FRigElementKey* InItem);
	struct FVector GetVectorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	struct FVector GetVectorFromControlValue();
	TArray<struct FVector> GetVectorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	struct FVector2D GetVector2DFromControlValue();
	struct FTransformNoScale GetTransformNoScaleFromControlValue();
	struct FTransform GetTransformMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	struct FTransform GetTransformFromControlValue();
	TArray<struct FTransform> GetTransformArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<class FName> GetTags(struct FRigElementKey* InItem);
	TArray<struct FRigElementKey> GetSelectedKeys();
	struct FRotator GetRotatorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	struct FRotator GetRotatorFromControlValue();
	TArray<struct FRotator> GetRotatorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FRigElementKey> GetRootElementKeys();
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool* bTraverse);
	struct FRigElementKey GetRigElementKeyMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FRigElementKey> GetReferenceKeys(bool* bTraverse);
	struct FQuat GetQuatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FQuat> GetQuatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	struct FRigElementKey GetPreviousParent(struct FRigElementKey* InKey);
	class FName GetPreviousName(struct FRigElementKey* InKey);
	struct FRigPose GetPose(bool* bInitial);
	TArray<struct FRigElementWeight> GetParentWeightArray(bool* bInitial);
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InParent, bool* bInitial);
	struct FTransform GetParentTransformByIndex(int32* InElementIndex, bool* bInitial);
	struct FTransform GetParentTransform(struct FRigElementKey* InKey, bool* bInitial);
	TArray<struct FRigElementKey> GetParents(struct FRigElementKey* InKey, bool bRecursive);
	int32 GetNumberOfParents(struct FRigElementKey* InKey);
	TArray<struct FRigElementKey> GetNullKeys(bool* bTraverse);
	class FName GetNameMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<class FName> GetNameArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	enum class ERigMetadataType GetMetadataType(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<class FName> GetMetadataNames(struct FRigElementKey* InItem);
	struct FTransform GetLocalTransformByIndex(int32* InElementIndex, bool* bInitial);
	struct FTransform GetLocalTransform(struct FRigElementKey* InKey, bool* bInitial);
	int32 GetLocalIndex_ForBlueprint(struct FRigElementKey* InKey);
	struct FTransform GetLocalControlShapeTransformByIndex(int32* InElementIndex, bool* bInitial);
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial);
	struct FLinearColor GetLinearColorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FLinearColor> GetLinearColorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FRigElementKey> GetKeys();
	struct FRigElementKey GetKey(int32* InElementIndex);
	int32 GetIntFromControlValue();
	int32 GetInt32Metadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<int32> GetInt32ArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	int32 GetIndex_ForBlueprint(struct FRigElementKey* InKey);
	struct FTransform GetGlobalTransformByIndex(int32* InElementIndex, bool* bInitial);
	struct FTransform GetGlobalTransform(struct FRigElementKey* InKey, bool* bInitial);
	struct FTransform GetGlobalControlShapeTransformByIndex(int32* InElementIndex, bool* bInitial);
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial);
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32* InElementIndex, bool* bInitial);
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey* InKey, bool* bInitial);
	float GetFloatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	float GetFloatFromControlValue();
	TArray<float> GetFloatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	struct FRigElementKey GetFirstParent(struct FRigElementKey* InKey);
	struct FEulerTransform GetEulerTransformFromControlValue();
	struct FRigElementKey GetDefaultParent(struct FRigElementKey* InKey);
	float GetCurveValueByIndex(int32* InElementIndex);
	float GetCurveValue(struct FRigElementKey* InKey);
	TArray<struct FRigElementKey> GetCurveKeys();
	struct FRigControlValue GetControlValueByIndex(int32* InElementIndex);
	struct FRigControlValue GetControlValue(struct FRigElementKey* InKey);
	struct FRotator GetControlPreferredRotatorByIndex(int32* InElementIndex, bool* bInitial);
	struct FRotator GetControlPreferredRotator(struct FRigElementKey* InKey, bool* bInitial);
	class URigHierarchyController* GetController();
	TArray<struct FRigElementKey> GetControlKeys(bool* bTraverse);
	TArray<struct FRigElementKey> GetChildren(struct FRigElementKey* InKey, bool bRecursive);
	bool GetBoolMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<bool> GetBoolArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName);
	TArray<struct FRigElementKey> GetBoneKeys(bool* bTraverse);
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool* bTraverse);
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey* InKey);
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey* InKey);
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey* InKey);
	void CopyPose(class URigHierarchy** InHierarchy, bool* bCurrent, bool* bInitial, bool* bWeights, bool* bMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy** InHierarchy);
	bool Contains_ForBlueprint(struct FRigElementKey* InKey);
};

// 0x38 (0x90 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTransformableControlHandle* GetDefaultObj();

};

// 0x278 (0x3F8 - 0x180)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_1122[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERigExecutionType                 ExecutionType;                                     // 0x188(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1125[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x18C(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x190(0x50)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x1E0(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1129[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x210(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_112A[0x90];                                    // Fixing Size After Last Property  > TateDumper <
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x2A8(0x60)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UControlRig*                           InteractionRig;                                    // 0x308(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class UClass*                                InteractionRigClass;                               // 0x310(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_112C[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x3D8(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_112E[0x1F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	class UClass* SetInteractionRigClass();
	class UControlRig* SetInteractionRig();
	bool SelectControl();
	void RequestConstruction();
	bool OnControlSelectedBP__DelegateSignature(struct FRigControlElement* Control);
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
	uint8                                        Pad_1134[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class UClass*                                ControlRigClass;                                   // 0x698(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x6A0(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x6B0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x6C0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x6D0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x6E0(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x6F0(0x10)(Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x700(0x10)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x710(0x10)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableLazyEvaluation;                             // 0x720(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_123D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LazyEvaluationPositionThreshold;                   // 0x724(0x4)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationRotationThreshold;                   // 0x728(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LazyEvaluationScaleThreshold;                      // 0x72C(0x4)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetTransformBeforeTick;                         // 0x730(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x731(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateRigOnTick;                                  // 0x732(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUpdateInEditor;                                   // 0x733(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDrawBones;                                        // 0x734(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDebugDrawing;                                 // 0x735(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1245[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x738(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1246[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	void Update(float* DeltaTime);
	class UObject* SetObjectBinding();
	TArray<struct FControlRigComponentMappedElement> SetMappedElements();
	enum class EControlRigComponentSpace SetInitialSpaceTransform();
	enum class EControlRigComponentSpace SetInitialBoneTransform(class FName BoneName, bool* bPropagateToChildren);
	class FName SetControlVector2D(const struct FVector2D& Value);
	enum class EControlRigComponentSpace SetControlTransform(const struct FTransform& Value);
	enum class EControlRigComponentSpace SetControlScale(const struct FVector& Value);
	enum class EControlRigComponentSpace SetControlRotator(const struct FRotator& Value);
	class UClass* SetControlRigClass();
	enum class EControlRigComponentSpace SetControlPosition(const struct FVector& Value);
	enum class EControlRigComponentSpace SetControlOffset();
	class FName SetControlInt(int32 Value);
	class FName SetControlFloat(float Value);
	class FName SetControlBool(bool Value);
	float SetBoneTransform(class FName BoneName, struct FTransform* Transform, bool* bPropagateToChildren);
	class USkeletalMesh* SetBoneInitialTransformsFromSkeletalMesh();
	class UControlRigComponent* OnPreInitialize();
	class UControlRigComponent* OnPreForwardsSolve();
	class UControlRigComponent* OnPreConstruction();
	class UControlRigComponent* OnPostInitialize();
	class UControlRigComponent* OnPostForwardsSolve();
	class UControlRigComponent* OnPostConstruction();
	void Initialize();
	struct FTransform GetSpaceTransform();
	struct FTransform GetInitialSpaceTransform();
	struct FTransform GetInitialBoneTransform(class FName BoneName);
	TArray<class FName> GetElementNames();
	struct FVector2D GetControlVector2D();
	struct FTransform GetControlTransform();
	struct FVector GetControlScale();
	struct FRotator GetControlRotator();
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition();
	struct FTransform GetControlOffset();
	int32 GetControlInt();
	float GetControlFloat();
	bool GetControlBool();
	struct FTransform GetBoneTransform(class FName BoneName);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName* Name);
	void ClearMappedElements();
	bool CanExecute();
	TArray<struct FControlRigComponentMappedCurve> AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
	TArray<struct FControlRigComponentMappedElement> AddMappedElements();
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0xB8 (0x580 - 0x4C8)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x4C8(0x8)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UClass*                                ControlRigClass;                                   // 0x4D0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRefreshOnTick;                                    // 0x4D8(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSelectable;                                     // 0x4D9(0x1)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1267[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    MaterialOverride;                                  // 0x4E0(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                ColorParameter;                                    // 0x4E8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCastShadows;                                      // 0x4F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1269[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       ActorRootComponent;                                // 0x500(0x8)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x508(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	TArray<class FName>                          ControlNames;                                      // 0x538(0x10)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x548(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x558(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x568(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  ColorParameterName;                                // 0x578(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	class USceneComponent*                       ActorRootComponent;                                // 0x4C8(0x8)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4D0(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint32                                       ControlRigIndex;                                   // 0x4D8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x4DC(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class FName                                  ControlName;                                       // 0x4E4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FName                                  ShapeName;                                         // 0x4EC(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class FName                                  ColorParameterName;                                // 0x4F4(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A4[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x50C(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x50C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12A8[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AControlRigShapeActor* GetDefaultObj();

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	struct FTransform SetGlobalTransform();
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(struct FTransform* NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
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
	uint8                                        Pad_12B1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xB0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xE0(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0x110(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  MaterialColorParameter;                            // 0x140(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x148(0x10)(Edit, ExportObject, Net, Parm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_12B5[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigShapeLibrary* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct FSoftObjectPath                       ControlRigObjectPath;                              // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FControlRigTestDataFrame              Initial;                                           // 0x48(0x90)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FControlRigTestDataFrame>      InputFrames;                                       // 0xD8(0x10)(EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FControlRigTestDataFrame>      OutputFrames;                                      // 0xE8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                FramesToSkip;                                      // 0xF8(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x108(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12E7[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTestData* GetDefaultObj();

	bool SetupReplay(class UControlRig** InControlRig, bool* bGroundTruth);
	void ReleaseReplay();
	bool Record(class UControlRig** InControlRig, double* InRecordingDuration);
	bool IsReplaying();
	bool IsRecording();
	struct FVector2D GetTimeRange(bool* bInput);
	enum class EControlRigTestDataPlaybackMode GetPlaybackMode();
	int32 GetFrameIndexForTime(double* InSeconds, bool* bInput);
	class UControlRigTestData* CreateNewAsset(class FString* InDesiredPackagePath, const class FString& InBlueprintPathName);
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_12EB[0x30];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_12EC[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x40 (0x438 - 0x3F8)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x3F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x408(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12ED[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_14B3[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	bool SetSelection();
	bool SetParent(const struct FRigElementKey& InParent, bool* bMaintainGlobalTransform);
	void SetHierarchy(class URigHierarchy** InHierarchy);
	class FName SetDisplayName(struct FRigElementKey* InControl, bool* bRenameElement);
	bool SetControlSettings(struct FRigElementKey* InKey);
	bool SelectElement(struct FRigElementKey* InKey, bool* bClearSelection);
	bool ReorderElement();
	struct FRigElementKey RenameElement(bool* bClearSelection);
	bool RemoveParent(const struct FRigElementKey& InParent, bool* bMaintainGlobalTransform);
	bool RemoveElement();
	bool RemoveAllParents(bool* bMaintainGlobalTransform);
	TArray<struct FRigElementKey> MirrorElements(bool* bSelectNewElements);
	TArray<struct FRigElementKey> ImportFromText(class FString* InContent, bool* bReplaceExistingElements, bool* bSelectNewElements);
	TArray<struct FRigElementKey> ImportCurves(class USkeleton** InSkeleton, class FName* InNameSpace, bool* bSelectCurves);
	TArray<struct FRigElementKey> ImportBones(class USkeleton** InSkeleton, class FName* InNameSpace, bool* bReplaceExistingBones, bool* bRemoveObsoleteBones, bool* bSelectBones);
	class URigHierarchy* GetHierarchy();
	struct FRigControlSettings GetControlSettings(struct FRigElementKey* InKey);
	class FString ExportToText();
	class FString ExportSelectionToText();
	TArray<struct FRigElementKey> DuplicateElements(bool* bSelectNewElements);
	bool DeselectElement(struct FRigElementKey* InKey);
	bool ClearSelection();
	struct FRigElementKey AddRigidBody(const struct FRigElementKey& InParent, struct FTransform* InLocalTransform);
	bool AddParent(const struct FRigElementKey& InParent, bool* bMaintainGlobalTransform);
	struct FRigElementKey AddNull(const struct FRigElementKey& InParent, bool* bTransformInGlobal);
	struct FRigElementKey AddCurve();
	struct FRigElementKey AddControl_ForBlueprint(const struct FRigElementKey& InParent);
	struct FRigElementKey AddBone(const struct FRigElementKey& InParent, bool* bTransformInGlobal, enum class ERigBoneType* InBoneType);
	struct FRigElementKey AddAnimationChannel_ForBlueprint(struct FRigElementKey* InParentControl);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_14C6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x68 (0x288 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x250(0x30)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LastExportedFrameRate;                             // 0x280(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14CC[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_14CF[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class UClass*                                ControlRigClass;                                   // 0x1A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1C0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C8(0x110)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D8(0x50)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x328(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x348(0x10)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D5[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_14D9[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FName                                  TrackName;                                         // 0xF8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)

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

	void SelectControls(class UControlRig** InControlRig, bool* bDoMirror);
	void SavePose(class UControlRig** InControlRig, bool* bUseAll);
	class FName ReplaceControlName(class FName* CurrentName);
	void PastePose(class UControlRig** InControlRig, bool* bDoKey, bool* bDoMirror);
	void GetCurrentPose(class UControlRig** InControlRig, struct FControlRigControlPose* OutPose);
	TArray<class FName> GetControlNames();
	bool DoesMirrorMatch();
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                LeftSide;                                          // 0x38(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14FA[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14FF[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigSnapSettings* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UControlRigWorkflowOptions* GetDefaultObj();

	bool EnsureAtLeastOneRigElementSelected();
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1507[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlRigTransformWorkflowOptions* GetDefaultObj();

	TArray<struct FRigVMUserWorkflow> ProvideWorkflows(class UObject** InSubject);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCheckBones;                                       // 0x29(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1509[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TranslationPrecision;                              // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationPrecision;                                 // 0x30(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ScalePrecision;                                    // 0x34(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurvePrecision;                                    // 0x38(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  EventNameB;                                        // 0x44(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1538[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigPose                              Pose;                                              // 0x50(0x70)(ConstParm, Net, OutParm, ReturnParm, Transient, EditConst)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

}


