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
	float                                        OscillationDuration;                               // 0xF0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        OscillationBlendInTime;                            // 0xF4(0x4)(Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        OscillationBlendOutTime;                           // 0xF8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FROscillator                          RotOscillation;                                    // 0xFC(0x24)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FVOscillator                          LocOscillation;                                    // 0x120(0x24)(Edit, ConstParm, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FFOscillator                          FOVOscillation;                                    // 0x144(0xC)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        AnimPlayRate;                                      // 0x150(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AnimScale;                                         // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        AnimBlendInTime;                                   // 0x158(0x4)(BlueprintVisible, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        AnimBlendOutTime;                                  // 0x15C(0x4)(Edit, ConstParm, Net, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        RandomAnimSegmentDuration;                         // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_136B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnim*                           Anim;                                              // 0x168(0x8)(Edit, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x178(0x1)(Edit, ConstParm, ExportObject, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_AD : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_136D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OscillatorTimeRemaining;                           // 0x17C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	class UCameraAnimInst*                       AnimInst;                                          // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_136F[0x78];                                    // Fixing Size After Last Property  > TateDumper <
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x200(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1370[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMatineeCameraShake* GetDefaultObj();

	struct FRotator StartMatineeCameraShakeFromSource(class APlayerCameraManager** PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent** SourceComponent, float* Scale, class UMatineeCameraShake* ReturnValue);
	struct FRotator StartMatineeCameraShake(class APlayerCameraManager** PlayerCameraManager, class UClass* ShakeClass, float* Scale, class UMatineeCameraShake* ReturnValue);
	bool ReceiveStopShake();
	void ReceivePlayShake(float* Scale);
	void ReceiveIsFinished(bool ReturnValue);
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

	void Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake, class UMatineeCameraShake* ReturnValue);
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>    ActiveAnimations;                                  // 0x48(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13AA[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationCameraModifier* GetDefaultObj();

	bool StopCameraAnimation(const struct FCameraAnimationHandle& Handle);
	bool StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence);
	bool StopAllCameraAnimations();
	struct FCameraAnimationParams PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationHandle& ReturnValue);
	void IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle, bool ReturnValue);
	void GetCameraAnimationCameraModifierFromPlayerController(class APlayerController** PlayerController, class UCameraAnimationCameraModifier* ReturnValue);
	class UObject* GetCameraAnimationCameraModifierFromID(int32 ControllerId, class UCameraAnimationCameraModifier* ReturnValue);
	class UObject* GetCameraAnimationCameraModifier(int32* PlayerIndex, class UCameraAnimationCameraModifier* ReturnValue);
};

// 0x20 (0x48 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13AC[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	bool StopAllCameraAnimationsOf(class APlayerController** PlayerController, class UCameraAnimationSequence* Sequence);
	bool StopAllCameraAnimations(class APlayerController** PlayerController);
	struct FCameraAnimationParams PlayCameraAnimation(class APlayerController** PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationHandle& ReturnValue);
	void IsCameraAnimationActive(class APlayerController** PlayerController, const struct FCameraAnimationHandle& Handle, bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	float                                        BlendInTime;                                       // 0x2C(0x4)(Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_13CA[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USimpleCameraShakePattern* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    X;                                                 // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FPerlinNoiseShaker                    Y;                                                 // 0x48(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FPerlinNoiseShaker                    Z;                                                 // 0x50(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x58(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x5C(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FPerlinNoiseShaker                    Pitch;                                             // 0x60(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Yaw;                                               // 0x68(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    Roll;                                              // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	struct FPerlinNoiseShaker                    FOV;                                               // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_13D1[0x38];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantCameraShakePattern* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       X;                                                 // 0x40(0xC)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FWaveOscillator                       Y;                                                 // 0x4C(0xC)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FWaveOscillator                       Z;                                                 // 0x58(0xC)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        RotationAmplitudeMultiplier;                       // 0x64(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        RotationFrequencyMultiplier;                       // 0x68(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FWaveOscillator                       Pitch;                                             // 0x6C(0xC)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Yaw;                                               // 0x78(0xC)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	struct FWaveOscillator                       Roll;                                              // 0x84(0xC)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	struct FWaveOscillator                       FOV;                                               // 0x90(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_13DC[0x3C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj();

};

}


