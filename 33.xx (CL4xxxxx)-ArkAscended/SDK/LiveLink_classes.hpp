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
	bool                                         bInterpolatePropertyValues;                        // 0x28(0x1)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_79A[0x17];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                        Pad_79D[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj();

};

// 0x8 (0x168 - 0x160)
// Class LiveLink.LiveLinkAnimationVirtualSubject
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_7A1[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bAppendSubjectNameToBones;                         // 0x161(0x1)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A2[0x6];                                      // Fixing Size Of Struct > TateDumper <

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

	struct FSubjectFrameHandle TransformNames(const TArray<class FName>& TransformNames);
	struct FLiveLinkTransform TransformName(class FName* Name);
	void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey* SubjectKey, bool* bEnabled);
	void RemoveSource(struct FLiveLinkSourceHandle* SourceHandle, bool* ReturnValue);
	struct FLiveLinkTransform ParentBoneSpaceTransform(struct FTransform* Transform);
	struct FSubjectFrameHandle NumberOfTransforms(int32* ReturnValue);
	void IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey* SubjectKey, bool* bForThisFrame, bool* ReturnValue);
	void IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle, bool* ReturnValue);
	void IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName, bool* ReturnValue);
	struct FLiveLinkTransform HasParent(bool* ReturnValue);
	struct FLiveLinkTransform GetTransformByName(class FName TransformName);
	struct FLiveLinkTransform GetTransformByIndex(int32 TransformIndex);
	void GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey* SubjectKey, class UClass** ReturnValue);
	void GetSourceTypeFromGuid(struct FGuid* SourceGuid, class FText* ReturnValue);
	void GetSourceType(struct FLiveLinkSourceHandle* SourceHandle, class FText* ReturnValue);
	void GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle, class FText* ReturnValue);
	void GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle, class FText* ReturnValue);
	struct FLiveLinkTransform GetRootTransform();
	class FName GetPropertyValue(const struct FLiveLinkBasicBlueprintData& BasicData, float Value, bool* ReturnValue);
	struct FLiveLinkTransform GetParent(const struct FLiveLinkTransform& Parent);
	struct FSubjectFrameHandle GetMetadata(struct FSubjectMetadata* MetaData);
	void GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject, TArray<struct FLiveLinkSubjectKey>* ReturnValue);
	void GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName, class UClass** ReturnValue);
	void GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject, TArray<struct FLiveLinkSubjectName>* ReturnValue);
	TMap<class FName, float> GetCurves();
	struct FLiveLinkTransform GetChildren(TArray<struct FLiveLinkTransform>* Children);
	struct FSubjectFrameHandle GetBasicData(const struct FLiveLinkBasicBlueprintData& BasicBlueprintData);
	struct FSubjectFrameHandle GetAnimationStaticData(const struct FLiveLinkSkeletonStaticData& AnimationStaticData, bool* ReturnValue);
	struct FSubjectFrameHandle GetAnimationFrameData(const struct FLiveLinkAnimationFrameData& AnimationFrameData, bool* ReturnValue);
	void EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool* ReturnValue);
	void EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool* ReturnValue);
	void EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, struct FTimecode* SceneTime, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool* ReturnValue);
	void EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool* ReturnValue);
	struct FLiveLinkTransform ComponentSpaceTransform(struct FTransform* Transform);
	struct FLiveLinkTransform ChildCount(int32* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xB8(0x10)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_909[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkComponent* GetDefaultObj();

	struct FSubjectFrameHandle GetSubjectDataAtWorldTime(class FName SubjectName, float* WorldTime, bool* bSuccess);
	struct FSubjectFrameHandle GetSubjectDataAtSceneTime(class FName SubjectName, struct FTimecode* SceneTime, bool* bSuccess);
	struct FSubjectFrameHandle GetSubjectData(class FName SubjectName, bool* bSuccess);
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
};

// 0x18 (0xD0 - 0xB8)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	class FName                                  ActorTransformBone;                                // 0xC0(0x8)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bModifyActorTransform;                             // 0xC8(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSetRelativeLocation;                              // 0xC9(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_90C[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkDrivenComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_925[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusFinder* GetDefaultObj();

	float GetAvailableProviders(const struct FLatentActionInfo& LatentInfo, TArray<struct FProviderPollResult>* AvailableProviders);
	void ConstructMessageBusFinder(class ULiveLinkMessageBusFinder** ReturnValue);
	struct FProviderPollResult ConnectToProvider(struct FLiveLinkSourceHandle* SourceHandle);
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
	TArray<struct FLiveLinkSourcePreset>         Sources;                                           // 0x28(0x10)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FLiveLinkSubjectPreset>        Subjects;                                          // 0x38(0x10)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_932[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkPreset* GetDefaultObj();

	void BuildFromClient();
	class UObject* ApplyToClientLatent(const struct FLatentActionInfo& LatentInfo);
	void ApplyToClient(bool* ReturnValue);
	void AddToClient(bool* bRecreatePresets, bool* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LiveLink.LiveLinkUserSettings
class ULiveLinkUserSettings : public UObject
{
public:
	struct FDirectoryPath                        PresetSaveDir;                                     // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkUserSettings* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLink.LiveLinkSettings
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>   DefaultRoleSettings;                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UClass*                                FrameInterpolationProcessor;                       // 0x38(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	TSoftObjectPtr<class ULiveLinkPreset>        DefaultLiveLinkPreset;                             // 0x40(0x30)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        ClockOffsetCorrectionStep;                         // 0x70(0x4)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ELiveLinkSourceMode               DefaultMessageBusSourceMode;                       // 0x74(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_939[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MessageBusPingRequestFrequency;                    // 0x78(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       MessageBusHeartbeatFrequency;                      // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       MessageBusHeartbeatTimeout;                        // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       MessageBusTimeBeforeRemovingInactiveSource;        // 0x90(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       TimeWithoutFrameToBeConsiderAsInvalid;             // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          ValidColor;                                        // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          InvalidColor;                                      // 0xB0(0x10)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        TextSizeSource;                                    // 0xC0(0x1)(ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        TextSizeSubject;                                   // 0xC1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_941[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkSettings* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class LiveLink.LiveLinkTimecodeProvider
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x30(0x18)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation;                                        // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideFrameRate;                                // 0x4C(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_94B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OverrideFrameRate;                                 // 0x50(0x8)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        BufferSize;                                        // 0x58(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_94C[0x64];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTimecodeProvider* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	uint8                                        Pad_950[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTimeSynchronizationSource* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	class FName                                  SourceName;                                        // 0xA8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULiveLinkVirtualSubjectSourceSettings* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	enum class ELiveLinkAxis                     FrontAxis;                                         // 0x28(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ELiveLinkAxis                     RightAxis;                                         // 0x29(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class ELiveLinkAxis                     UpAxis;                                            // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bUseOffsetPosition;                                // 0x2B(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseOffsetOrientation;                             // 0x2C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_957[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetPosition;                                    // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              OffsetOrientation;                                 // 0x48(0x18)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_959[0x10];                                     // Fixing Size Of Struct > TateDumper <

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
	class FName                                  BoneName;                                          // 0x28(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_966[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj();

};

// 0x28 (0x188 - 0x160)
// Class LiveLink.LiveLinkBlueprintVirtualSubject
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_973[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkBlueprintVirtualSubject* GetDefaultObj();

	void UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct, bool* ReturnValue);
	void UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime, bool* ReturnValue);
	void OnUpdate();
	void OnInitialize();
};

}


