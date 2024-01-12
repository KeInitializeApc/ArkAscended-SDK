#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x230 - 0xF0)
// Class GameplayCameras.MatineeCameraShake
class UMatineeCameraShake : public UCameraShakeBase
{
public:
	float                                        OscillationDuration;                               // 0xF0(0x4)(Edit, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OscillationBlendInTime;                            // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OscillationBlendOutTime;                           // 0xF8(0x4)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FROscillator                          RotOscillation;                                    // 0xFC(0x24)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVOscillator                          LocOscillation;                                    // 0x120(0x24)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FFOscillator                          FOVOscillation;                                    // 0x144(0xC)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnimPlayRate;                                      // 0x150(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimScale;                                         // 0x154(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnimBlendInTime;                                   // 0x158(0x4)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnimBlendOutTime;                                  // 0x15C(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RandomAnimSegmentDuration;                         // 0x160(0x4)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22D8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnim*                           Anim;                                              // 0x168(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x170(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x178(0x1)(Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_19D : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_22D9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OscillatorTimeRemaining;                           // 0x17C(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UCameraAnimInst*                       AnimInst;                                          // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22DC[0x78];                                    // Fixing Size After Last Property  > TateDumper <
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x200(0x8)(ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22DD[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMatineeCameraShake* GetDefaultObj();

	class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class UClass** ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class UMatineeCameraShake* StartMatineeCameraShake(class UClass** ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	bool ReceiveStopShake();
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	struct FMinimalViewInfo BlueprintUpdateCameraShake(float* DeltaTime, float Alpha, struct FMinimalViewInfo* ModifiedPOV);
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MatineeCameraShakePattern
class UMatineeCameraShakePattern : public UCameraShakePattern
{
public:

	static class UClass* StaticClass();
	static class UMatineeCameraShakePattern* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMatineeCameraShakeEvaluator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMatineeCameraShakeFunctionLibrary* GetDefaultObj();

	class UMatineeCameraShake* Conv_MatineeCameraShake();
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>    ActiveAnimations;                                  // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2304[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationCameraModifier* GetDefaultObj();

	bool StopCameraAnimation(const struct FCameraAnimationHandle& Handle);
	bool StopAllCameraAnimationsOf();
	bool StopAllCameraAnimations();
	struct FCameraAnimationHandle PlayCameraAnimation(const struct FCameraAnimationParams& Params);
	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController** PlayerController);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID();
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier();
};

// 0x20 (0x48 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2305[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCompositeCameraShakePattern* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class GameplayCameras.DefaultCameraShakeBase
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:

	static class UClass* StaticClass();
	static class UDefaultCameraShakeBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GameplayCameras.GameplayCamerasSubsystem
class UGameplayCamerasSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UGameplayCamerasSubsystem* GetDefaultObj();

	bool StopCameraAnimation(class APlayerController** PlayerController, const struct FCameraAnimationHandle& Handle);
	bool StopAllCameraAnimationsOf(class APlayerController** PlayerController);
	bool StopAllCameraAnimations(class APlayerController** PlayerController);
	struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController** PlayerController, const struct FCameraAnimationParams& Params);
	bool IsCameraAnimationActive(class APlayerController** PlayerController, const struct FCameraAnimationHandle& Handle);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	float                                        BlendInTime;                                       // 0x2C(0x4)(Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x30(0x4)(Edit, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2315[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USimpleCameraShakePattern* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    X;                                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FPerlinNoiseShaker                    Y;                                                 // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FPerlinNoiseShaker                    Z;                                                 // 0x50(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x5C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    Pitch;                                             // 0x60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Yaw;                                               // 0x68(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Roll;                                              // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    FOV;                                               // 0x78(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig)
	uint8                                        Pad_2319[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class GameplayCameras.TestCameraShake
class UTestCameraShake : public UCameraShakeBase
{
public:

	static class UClass* StaticClass();
	static class UTestCameraShake* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class GameplayCameras.ConstantCameraShakePattern
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(OutParm, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantCameraShakePattern* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       X;                                                 // 0x40(0xC)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FWaveOscillator                       Y;                                                 // 0x4C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FWaveOscillator                       Z;                                                 // 0x58(0xC)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x68(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       Pitch;                                             // 0x6C(0xC)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Yaw;                                               // 0x78(0xC)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Roll;                                              // 0x84(0xC)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FWaveOscillator                       FOV;                                               // 0x90(0xC)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig)
	uint8                                        Pad_231D[0x3C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj();

};

}


