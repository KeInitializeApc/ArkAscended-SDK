#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x150 - 0x28)
// Class SP_Camera.SPCameraMode
class USPCameraMode : public UObject
{
public:
	class ASPPlayerCameraManager*                PlayerCamera;                                      // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        TransitionInTime;                                  // 0x30(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FViewTargetTransitionParams           TransitionParams;                                  // 0x34(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        FOV;                                               // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bUseViewTargetCameraComponent;                     // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCineCam;                                       // 0x49(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCineCamSettings;                               // 0x4A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideFilmback;                                 // 0x4B(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               CineCam_FilmbackOverride;                          // 0x4C(0xC)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_CurrentFocalLength;                        // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_CurrentAperture;                           // 0x5C(0x4)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_FocusDistanceAdjustment;                   // 0x60(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_DisplayOnly_FOV;                           // 0x64(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        BlockingActors;                                    // 0x68(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DD5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CameraShakeClass;                                  // 0x80(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCameraShakeBase*                      CameraShakeInstance;                               // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bScaleShakeWithViewTargetVelocity;                 // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DD9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ShakeScaling_SpeedRange;                           // 0x98(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ShakeScaling_ScaleRange;                           // 0xA8(0x10)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ShakeScaleInterpolator;                            // 0xB8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugShake;                                   // 0xD8(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFocusDistance;                           // 0xD9(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewPitchMinAndMax;                       // 0xDA(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DDD[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ViewPitchMinOverride;                              // 0xDC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        ViewPitchMaxOverride;                              // 0xE0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DDF[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCameraMode* GetDefaultObj();

	void ResetToDefaultSettings();
	struct FTransform GetCustomFocusDistance(class AActor* ViewTarget, float ReturnValue);
};

// 0x370 (0x4C0 - 0x150)
// Class SP_Camera.SPCam_AttachedCamera
class USPCam_AttachedCamera : public USPCameraMode
{
public:
	struct FDoubleIIRInterpolatorVector          LocInterpolator;                                   // 0x150(0x108)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorRotator         RotInterpolator;                                   // 0x258(0x108)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowPlayerRotationControl;                       // 0x360(0x1)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DE7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDoubleIIRInterpolatorRotator         PlayerControlRotInterpolator;                      // 0x368(0x108)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ExtraLocZInterpolator;                             // 0x470(0x20)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotPitchLimits;                                  // 0x490(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotYawLimits;                                    // 0x4A0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCameraComponent*                      LastViewCameraComponent;                           // 0x4B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DE9[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCam_AttachedCamera* GetDefaultObj();

	void ChooseViewCameraComponent(class AActor* ViewTarget, class UCameraComponent* ReturnValue);
};

// 0x6F0 (0x840 - 0x150)
// Class SP_Camera.SPCam_ThirdPerson
class USPCam_ThirdPerson : public USPCameraMode
{
public:
	struct FTransform                            PivotToViewTarget;                                 // 0x150(0x60)(ConstParm, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorVector          PivotLocInterpolator;                              // 0x1B0(0x108)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorRotator         PivotRotInterpolator;                              // 0x2B8(0x108)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ExtraPivotLocZInterpolator;                        // 0x3C0(0x20)(ConstParm, BlueprintVisible, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotPitchLimits;                                  // 0x3E0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotYawLimits;                                    // 0x3F0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            CameraToPivot;                                     // 0x400(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorVector          CameraToPivotTranslationInterpolator;              // 0x460(0x108)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UCurveVector*                          CameraToPivot_PitchAdjustmentCurve;                // 0x568(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CameraToPivot_PitchAdjustmentCurveScale;           // 0x570(0x4)(BlueprintVisible, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DFA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveVector*                          CameraToPivot_SpeedAdjustmentCurve;                // 0x578(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        CameraToPivot_SpeedAdjustmentCurveScale;           // 0x580(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DFB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CameraToPivot_SpeedAdjustment_SpeedRange;          // 0x588(0x10)(ExportObject, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ECameraAutoFollowMode             AutoFollowMode;                                    // 0x598(0x1)(Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DFD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LazyAutoFollowPitchLimits;                         // 0x5A0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowLazyAutoFollowPitchControl;                  // 0x5B0(0x1)(Edit, Net, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E00[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LazyFollowGoalPitch;                               // 0x5B4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        LazyFollowLaziness;                                // 0x5B8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        LazyFollowDelayAfterUserControl;                   // 0x5BC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E08[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LookatOffsetLocal;                                 // 0x5C8(0x18)(Edit, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorVector                LookatWorldSpaceInterpolator;                      // 0x5E0(0x78)(ConstParm, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E09[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseLookatPoint : 1;                               // Mask: 0x1, PropSize: 0x10x670(0x1)(Edit, ExportObject, BlueprintReadOnly, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bDoPredictiveLookat : 1;                           // Mask: 0x2, PropSize: 0x10x670(0x1)(ConstParm, BlueprintVisible, ExportObject, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_135 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E0B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PredictiveLookatTime;                              // 0x674(0x4)(Edit, ConstParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPenetrationAvoidanceRay>      CameraPenetrationAvoidanceRays;                    // 0x678(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPenetrationAvoidanceRay>      SafeLocPenetrationAvoidanceRays;                   // 0x688(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SafeLocationOffset;                                // 0x698(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorVector                SafeLocationInterpolator;                          // 0x6B0(0x78)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bValidateSafeLoc : 1;                              // Mask: 0x1, PropSize: 0x10x728(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bPreventCameraPenetration : 1;                     // Mask: 0x2, PropSize: 0x10x728(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bDoPredictiveAvoidance : 1;                        // Mask: 0x4, PropSize: 0x10x728(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_136 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E10[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PenetrationBlendInTime;                            // 0x72C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        PenetrationBlendOutTime;                           // 0x730(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E14[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LastSafeLocationLocal;                             // 0x738(0x18)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        LastPenetrationBlockedPct;                         // 0x750(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E16[0xE4];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bDrawDebugPivot;                                   // 0x838(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugLookat;                                  // 0x839(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugSafeLoc;                                 // 0x83A(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugPenetrationAvoidance;                    // 0x83B(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E18[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCam_ThirdPerson* GetDefaultObj();

};

// 0x8C0 (0x4280 - 0x39C0)
// Class SP_Camera.SPPlayerCameraManager
class ASPPlayerCameraManager : public APlayerCameraManager
{
public:
	float                                        BasePelvisRelativeZ;                               // 0x39C0(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PelvisBoneName;                                    // 0x39C4(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E69[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                AltViewTarget;                                     // 0x39D8(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                SavedMainViewTarget;                               // 0x39E8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FActiveSPCamera>               CameraBlendStack;                                  // 0x39F0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FSPCameraModeInstance>         CameraModeInstances;                               // 0x3A00(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6C[0x870];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASPPlayerCameraManager* GetDefaultObj();

	void StopAmbientCameraShake(bool* bImmediate);
	void StartAmbientCameraShake();
	void SkipNextInterpolation();
	void SkipBlends();
	void SetViewPitchLimits(float* MinPitch, float* MaxPitch);
	void SetUsingAlternateCamera(bool* bNewUsingAltCamera);
	void SetDebugCameraStyle(enum class EDebugCameraStyle* NewDebugCameraStyle);
	void ResetViewPitchLimits();
	void IsUsingAlternateCamera(bool ReturnValue);
	void GetCurrentCameraMode(class USPCameraMode* ReturnValue);
	void GetCameraClassForCharacter(class AActor** InViewTarget, class UClass* ReturnValue);
	void ConfigureAlternateCamera(class UClass** NewAltCameraMode, class AActor** NewAltViewTarget, float* NewAltCameraTransitionTime);
	void ClearAlternateCamera();
};

}


