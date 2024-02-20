#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                         bInterpolatePropertyValues;                        // 0x28(0x1)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D[0x17];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                        Pad_31[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj();

};

// 0x8 (0x168 - 0x160)
// Class LiveLink.LiveLinkAnimationVirtualSubject
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_37[0x1];                                       // Fixing Size After Last Property  > TateDumper <
	bool                                         bAppendSubjectNameToBones;                         // 0x161(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A[0x6];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationVirtualSubject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkBlueprintLibrary
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkBlueprintLibrary* GetDefaultObj();

	TArray<class FName> TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle);
	void TransformName(struct FLiveLinkTransform* LiveLinkTransform, class FName* Name);
	bool SetLiveLinkSubjectEnabled();
	struct FLiveLinkSourceHandle RemoveSource(bool ReturnValue);
	void ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	void NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle, int32 ReturnValue);
	bool IsSpecificLiveLinkSubjectEnabled(bool ReturnValue);
	struct FLiveLinkSourceHandle IsSourceStillValid(bool ReturnValue);
	struct FLiveLinkSubjectName IsLiveLinkSubjectEnabled(bool ReturnValue);
	void HasParent(struct FLiveLinkTransform* LiveLinkTransform, bool ReturnValue);
	class FName GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	void GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	struct FLiveLinkSubjectKey GetSpecificLiveLinkSubjectRole(class UClass* ReturnValue);
	struct FGuid GetSourceTypeFromGuid(class FText ReturnValue);
	struct FLiveLinkSourceHandle GetSourceType(class FText ReturnValue);
	struct FLiveLinkSourceHandle GetSourceStatus(class FText ReturnValue);
	struct FLiveLinkSourceHandle GetSourceMachineName(class FText ReturnValue);
	void GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	struct FLiveLinkBasicBlueprintData GetPropertyValue(class FName PropertyName, float* Value, bool ReturnValue);
	void GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
	struct FSubjectMetadata GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool GetLiveLinkSubjects(const TArray<struct FLiveLinkSubjectKey>& ReturnValue);
	struct FLiveLinkSubjectName GetLiveLinkSubjectRole(class UClass* ReturnValue);
	bool GetLiveLinkEnabledSubjectNames(const TArray<struct FLiveLinkSubjectName>& ReturnValue);
	void GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<class FName, float> Curves);
	TArray<struct FLiveLinkTransform> GetChildren(struct FLiveLinkTransform* LiveLinkTransform);
	struct FLiveLinkBasicBlueprintData GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle);
	struct FLiveLinkSkeletonStaticData GetAnimationStaticData(struct FSubjectFrameHandle* SubjectFrameHandle, bool ReturnValue);
	struct FLiveLinkAnimationFrameData GetAnimationFrameData(struct FSubjectFrameHandle* SubjectFrameHandle, bool ReturnValue);
	struct FLiveLinkBaseBlueprintData EvaluateLiveLinkFrameWithSpecificRole(class UClass* Role, bool ReturnValue);
	struct FLiveLinkBaseBlueprintData EvaluateLiveLinkFrameAtWorldTimeOffset(class UClass* Role, bool ReturnValue);
	struct FLiveLinkBaseBlueprintData EvaluateLiveLinkFrameAtSceneTime(class UClass* Role, bool ReturnValue);
	struct FLiveLinkBaseBlueprintData EvaluateLiveLinkFrame(bool ReturnValue);
	void ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	void ChildCount(struct FLiveLinkTransform* LiveLinkTransform, int32 ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xB8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkComponent* GetDefaultObj();

	bool GetSubjectDataAtWorldTime(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool GetSubjectDataAtSceneTime(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool GetSubjectData(struct FSubjectFrameHandle* SubjectFrameHandle);
	TArray<class FName> GetAvailableSubjectNames();
};

// 0x18 (0xD0 - 0xB8)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xB8(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	class FName                                  ActorTransformBone;                                // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bModifyActorTransform;                             // 0xC8(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bSetRelativeLocation;                              // 0xC9(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB[0x6];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkDrivenComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_BF[0x58];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusFinder* GetDefaultObj();

	TArray<struct FProviderPollResult> GetAvailableProviders();
	void ConstructMessageBusFinder(class ULiveLinkMessageBusFinder* ReturnValue);
	struct FLiveLinkSourceHandle ConnectToProvider();
};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkMessageBusSourceFactory
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusSourceFactory* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class LiveLink.LiveLinkMessageBusSourceSettings
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusSourceSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class LiveLink.LiveLinkPreset
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>         Sources;                                           // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLiveLinkSubjectPreset>        Subjects;                                          // 0x38(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_CD[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkPreset* GetDefaultObj();

	void BuildFromClient();
	struct FLatentActionInfo ApplyToClientLatent();
	void ApplyToClient(bool ReturnValue);
	bool AddToClient(bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LiveLink.LiveLinkUserSettings
class ULiveLinkUserSettings : public UObject
{
public:
	struct FDirectoryPath                        PresetSaveDir;                                     // 0x28(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkUserSettings* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLink.LiveLinkSettings
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>   DefaultRoleSettings;                               // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class UClass*                                FrameInterpolationProcessor;                       // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class ULiveLinkPreset>        DefaultLiveLinkPreset;                             // 0x40(0x30)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        ClockOffsetCorrectionStep;                         // 0x70(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	enum class ELiveLinkSourceMode               DefaultMessageBusSourceMode;                       // 0x74(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_D9[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	double                                       MessageBusPingRequestFrequency;                    // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	double                                       MessageBusHeartbeatFrequency;                      // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	double                                       MessageBusHeartbeatTimeout;                        // 0x88(0x8)(Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	double                                       MessageBusTimeBeforeRemovingInactiveSource;        // 0x90(0x8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	double                                       TimeWithoutFrameToBeConsiderAsInvalid;             // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FLinearColor                          ValidColor;                                        // 0xA0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FLinearColor                          InvalidColor;                                      // 0xB0(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        TextSizeSource;                                    // 0xC0(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        TextSizeSubject;                                   // 0xC1(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_DF[0x6];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkSettings* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class LiveLink.LiveLinkTimecodeProvider
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation;                                        // 0x48(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bOverrideFrameRate;                                // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_E6[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OverrideFrameRate;                                 // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        BufferSize;                                        // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_E7[0x64];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTimecodeProvider* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x30(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E8[0x48];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTimeSynchronizationSource* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	class FName                                  SourceName;                                        // 0xA8(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULiveLinkVirtualSubjectSourceSettings* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	enum class ELiveLinkAxis                     FrontAxis;                                         // 0x28(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	enum class ELiveLinkAxis                     RightAxis;                                         // 0x29(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	enum class ELiveLinkAxis                     UpAxis;                                            // 0x2A(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseOffsetPosition;                                // 0x2B(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bUseOffsetOrientation;                             // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_EB[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetPosition;                                    // 0x30(0x18)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FRotator                              OffsetOrientation;                                 // 0x48(0x18)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_EC[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTransformAxisSwitchPreProcessor* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkAnimationAxisSwitchPreProcessor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class LiveLink.LiveLinkAnimationRoleToTransform
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	class FName                                  BoneName;                                          // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_EF[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj();

};

// 0x28 (0x188 - 0x160)
// Class LiveLink.LiveLinkBlueprintVirtualSubject
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_F4[0x28];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkBlueprintVirtualSubject* GetDefaultObj();

	struct FLiveLinkBaseStaticData UpdateVirtualSubjectStaticData_Internal(bool ReturnValue);
	bool UpdateVirtualSubjectFrameData_Internal(bool ReturnValue);
	void OnUpdate();
	void OnInitialize();
};

}


