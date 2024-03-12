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
	float                                        OscillationDuration;                               // 0xF0(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OscillationBlendInTime;                            // 0xF4(0x4)(ConstParm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OscillationBlendOutTime;                           // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FROscillator                          RotOscillation;                                    // 0xFC(0x24)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVOscillator                          LocOscillation;                                    // 0x120(0x24)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFOscillator                          FOVOscillation;                                    // 0x144(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimPlayRate;                                      // 0x150(0x4)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        AnimScale;                                         // 0x154(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimBlendInTime;                                   // 0x158(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimBlendOutTime;                                  // 0x15C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RandomAnimSegmentDuration;                         // 0x160(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_147E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnim*                           Anim;                                              // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x170(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x178(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_9D : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_147F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OscillatorTimeRemaining;                           // 0x17C(0x4)(Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCameraAnimInst*                       AnimInst;                                          // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1480[0x78];                                    // Fixing Size After Last Property  > TateDumper <
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1481[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMatineeCameraShake* GetDefaultObj();

	class UMatineeCameraShake* StartMatineeCameraShakeFromSource();
	class UMatineeCameraShake* StartMatineeCameraShake();
	void ReceiveStopShake(bool* bImmediately);
	float ReceivePlayShake();
	bool ReceiveIsFinished();
	struct FMinimalViewInfo BlueprintUpdateCameraShake(float Alpha, const struct FMinimalViewInfo& ModifiedPOV);
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

	class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>    ActiveAnimations;                                  // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B9[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationCameraModifier* GetDefaultObj();

	bool StopCameraAnimation(const struct FCameraAnimationHandle& Handle);
	bool StopAllCameraAnimationsOf(class UCameraAnimationSequence** Sequence);
	bool StopAllCameraAnimations();
	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence** Sequence);
	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController();
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject** WorldContextObject);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject** WorldContextObject, int32 PlayerIndex);
};

// 0x20 (0x48 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_14BB[0x10];                                    // Fixing Size Of Struct > TateDumper <

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

	bool StopCameraAnimation(const struct FCameraAnimationHandle& Handle);
	bool StopAllCameraAnimationsOf(class UCameraAnimationSequence** Sequence);
	bool StopAllCameraAnimations();
	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence** Sequence);
	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	float                                        BlendInTime;                                       // 0x2C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14D5[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USimpleCameraShakePattern* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, ConstParm, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    X;                                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Y;                                                 // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Z;                                                 // 0x50(0x8)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x5C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    Pitch;                                             // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Yaw;                                               // 0x68(0x8)(ZeroConstructor, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Roll;                                              // 0x70(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    FOV;                                               // 0x78(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	uint8                                        Pad_14DB[0x38];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantCameraShakePattern* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, ConstParm, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       X;                                                 // 0x40(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Y;                                                 // 0x4C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Z;                                                 // 0x58(0xC)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x68(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       Pitch;                                             // 0x6C(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Yaw;                                               // 0x78(0xC)(ZeroConstructor, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Roll;                                              // 0x84(0xC)(Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config)
	struct FWaveOscillator                       FOV;                                               // 0x90(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	uint8                                        Pad_14E2[0x3C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj();

};

}


