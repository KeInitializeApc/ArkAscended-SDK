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
	bool                                         bInterpolatePropertyValues;                        // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BD9[0x17];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                        Pad_BDA[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj();

};

// 0x8 (0x168 - 0x160)
// Class LiveLink.LiveLinkAnimationVirtualSubject
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_BDD[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bAppendSubjectNameToBones;                         // 0x161(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BDE[0x6];                                      // Fixing Size Of Struct > TateDumper <

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
	struct FLiveLinkSubjectKey SetLiveLinkSubjectEnabled(bool* bEnabled);
	bool RemoveSource();
	struct FLiveLinkTransform ParentBoneSpaceTransform(struct FTransform* Transform);
	int32 NumberOfTransforms();
	bool IsSpecificLiveLinkSubjectEnabled();
	bool IsSourceStillValid();
	bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	bool HasParent();
	struct FLiveLinkTransform GetTransformByName(class FName TransformName);
	struct FLiveLinkTransform GetTransformByIndex();
	class UClass* GetSpecificLiveLinkSubjectRole();
	class FText GetSourceTypeFromGuid();
	class FText GetSourceType();
	class FText GetSourceStatus();
	class FText GetSourceMachineName();
	struct FLiveLinkTransform GetRootTransform();
	bool GetPropertyValue(float Value);
	struct FLiveLinkTransform GetParent(const struct FLiveLinkTransform& Parent);
	struct FSubjectFrameHandle GetMetadata(struct FSubjectMetadata* MetaData);
	TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects();
	class UClass* GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames();
	TMap<class FName, float> GetCurves();
	struct FLiveLinkTransform GetChildren(TArray<struct FLiveLinkTransform>* Children);
	struct FLiveLinkBasicBlueprintData GetBasicData();
	bool GetAnimationStaticData();
	bool GetAnimationFrameData();
	bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role);
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role);
	bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role);
	bool EvaluateLiveLinkFrame();
	struct FLiveLinkTransform ComponentSpaceTransform(struct FTransform* Transform);
	int32 ChildCount();
};

// 0x20 (0xD8 - 0xB8)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C53[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkComponent* GetDefaultObj();

	struct FSubjectFrameHandle GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime);
	struct FSubjectFrameHandle GetSubjectDataAtSceneTime(class FName SubjectName);
	struct FSubjectFrameHandle GetSubjectData(class FName SubjectName);
	TArray<class FName> GetAvailableSubjectNames();
};

// 0x18 (0xD0 - 0xB8)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	class FName                                  ActorTransformBone;                                // 0xC0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bModifyActorTransform;                             // 0xC8(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSetRelativeLocation;                              // 0xC9(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C56[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkDrivenComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_C60[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusFinder* GetDefaultObj();

	TArray<struct FProviderPollResult> GetAvailableProviders();
	class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
	struct FLiveLinkSourceHandle ConnectToProvider(struct FProviderPollResult* Provider);
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
	TArray<struct FLiveLinkSourcePreset>         Sources;                                           // 0x28(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FLiveLinkSubjectPreset>        Subjects;                                          // 0x38(0x10)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C6A[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkPreset* GetDefaultObj();

	void BuildFromClient();
	struct FLatentActionInfo ApplyToClientLatent();
	bool ApplyToClient();
	bool AddToClient();
};

// 0x10 (0x38 - 0x28)
// Class LiveLink.LiveLinkUserSettings
class ULiveLinkUserSettings : public UObject
{
public:
	struct FDirectoryPath                        PresetSaveDir;                                     // 0x28(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkUserSettings* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLink.LiveLinkSettings
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>   DefaultRoleSettings;                               // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UClass*                                FrameInterpolationProcessor;                       // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TSoftObjectPtr<class ULiveLinkPreset>        DefaultLiveLinkPreset;                             // 0x40(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ClockOffsetCorrectionStep;                         // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ELiveLinkSourceMode               DefaultMessageBusSourceMode;                       // 0x74(0x1)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C70[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MessageBusPingRequestFrequency;                    // 0x78(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MessageBusHeartbeatFrequency;                      // 0x80(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MessageBusHeartbeatTimeout;                        // 0x88(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MessageBusTimeBeforeRemovingInactiveSource;        // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       TimeWithoutFrameToBeConsiderAsInvalid;             // 0x98(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          ValidColor;                                        // 0xA0(0x10)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          InvalidColor;                                      // 0xB0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        TextSizeSource;                                    // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        TextSizeSubject;                                   // 0xC1(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C73[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkSettings* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class LiveLink.LiveLinkTimecodeProvider
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x30(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation;                                        // 0x48(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideFrameRate;                                // 0x4C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C75[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OverrideFrameRate;                                 // 0x50(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        BufferSize;                                        // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C76[0x64];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkTimecodeProvider* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	uint8                                        Pad_C79[0x48];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class ELiveLinkAxis                     FrontAxis;                                         // 0x28(0x1)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ELiveLinkAxis                     RightAxis;                                         // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ELiveLinkAxis                     UpAxis;                                            // 0x2A(0x1)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseOffsetPosition;                                // 0x2B(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseOffsetOrientation;                             // 0x2C(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C7C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetPosition;                                    // 0x30(0x18)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              OffsetOrientation;                                 // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C7D[0x10];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_C80[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj();

};

// 0x28 (0x188 - 0x160)
// Class LiveLink.LiveLinkBlueprintVirtualSubject
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_C88[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkBlueprintVirtualSubject* GetDefaultObj();

	bool UpdateVirtualSubjectStaticData_Internal();
	bool UpdateVirtualSubjectFrameData_Internal();
	void OnUpdate();
	void OnInitialize();
};

}


