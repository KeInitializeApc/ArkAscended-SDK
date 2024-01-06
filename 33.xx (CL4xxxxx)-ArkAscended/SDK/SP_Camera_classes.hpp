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
	class ASPPlayerCameraManager*                PlayerCamera;                                      // 0x28(0x8)(ExportObject, OutParm, Config, EditConst, SubobjectReference)
	float                                        TransitionInTime;                                  // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FViewTargetTransitionParams           TransitionParams;                                  // 0x34(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        FOV;                                               // 0x44(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig)
	bool                                         bUseViewTargetCameraComponent;                     // 0x48(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCineCam;                                       // 0x49(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCineCamSettings;                               // 0x4A(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideFilmback;                                 // 0x4B(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               CineCam_FilmbackOverride;                          // 0x4C(0xC)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_CurrentFocalLength;                        // 0x58(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_CurrentAperture;                           // 0x5C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_FocusDistanceAdjustment;                   // 0x60(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CineCam_DisplayOnly_FOV;                           // 0x64(0x4)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        BlockingActors;                                    // 0x68(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1937[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CameraShakeClass;                                  // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UCameraShakeBase*                      CameraShakeInstance;                               // 0x88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bScaleShakeWithViewTargetVelocity;                 // 0x90(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1939[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ShakeScaling_SpeedRange;                           // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             ShakeScaling_ScaleRange;                           // 0xA8(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ShakeScaleInterpolator;                            // 0xB8(0x20)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugShake;                                   // 0xD8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFocusDistance;                           // 0xD9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewPitchMinAndMax;                       // 0xDA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_193B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ViewPitchMinOverride;                              // 0xDC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ViewPitchMaxOverride;                              // 0xE0(0x4)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_193E[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCameraMode* GetDefaultObj();

	void ResetToDefaultSettings();
	struct FTransform GetCustomFocusDistance(class AActor* ViewTarget, float* ReturnValue);
};

// 0x370 (0x4C0 - 0x150)
// Class SP_Camera.SPCam_AttachedCamera
class USPCam_AttachedCamera : public USPCameraMode
{
public:
	struct FDoubleIIRInterpolatorVector          LocInterpolator;                                   // 0x150(0x108)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorRotator         RotInterpolator;                                   // 0x258(0x108)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowPlayerRotationControl;                       // 0x360(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_194F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDoubleIIRInterpolatorRotator         PlayerControlRotInterpolator;                      // 0x368(0x108)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ExtraLocZInterpolator;                             // 0x470(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotPitchLimits;                                  // 0x490(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotYawLimits;                                    // 0x4A0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UCameraComponent*                      LastViewCameraComponent;                           // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1951[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCam_AttachedCamera* GetDefaultObj();

	void ChooseViewCameraComponent(class AActor* ViewTarget, class UCameraComponent** ReturnValue);
};

// 0x6F0 (0x840 - 0x150)
// Class SP_Camera.SPCam_ThirdPerson
class USPCam_ThirdPerson : public USPCameraMode
{
public:
	struct FTransform                            PivotToViewTarget;                                 // 0x150(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorVector          PivotLocInterpolator;                              // 0x1B0(0x108)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorRotator         PivotRotInterpolator;                              // 0x2B8(0x108)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ExtraPivotLocZInterpolator;                        // 0x3C0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotPitchLimits;                                  // 0x3E0(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotYawLimits;                                    // 0x3F0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            CameraToPivot;                                     // 0x400(0x60)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorVector          CameraToPivotTranslationInterpolator;              // 0x460(0x108)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UCurveVector*                          CameraToPivot_PitchAdjustmentCurve;                // 0x568(0x8)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CameraToPivot_PitchAdjustmentCurveScale;           // 0x570(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1977[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveVector*                          CameraToPivot_SpeedAdjustmentCurve;                // 0x578(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CameraToPivot_SpeedAdjustmentCurveScale;           // 0x580(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1979[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CameraToPivot_SpeedAdjustment_SpeedRange;          // 0x588(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class ECameraAutoFollowMode             AutoFollowMode;                                    // 0x598(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_197B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LazyAutoFollowPitchLimits;                         // 0x5A0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowLazyAutoFollowPitchControl;                  // 0x5B0(0x1)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_197C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LazyFollowGoalPitch;                               // 0x5B4(0x4)(Edit, ConstParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LazyFollowLaziness;                                // 0x5B8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LazyFollowDelayAfterUserControl;                   // 0x5BC(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_197E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LookatOffsetLocal;                                 // 0x5C8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorVector                LookatWorldSpaceInterpolator;                      // 0x5E0(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1980[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseLookatPoint : 1;                               // Mask: 0x1, PropSize: 0x10x670(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bDoPredictiveLookat : 1;                           // Mask: 0x2, PropSize: 0x10x670(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_D2 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1982[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PredictiveLookatTime;                              // 0x674(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPenetrationAvoidanceRay>      CameraPenetrationAvoidanceRays;                    // 0x678(0x10)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPenetrationAvoidanceRay>      SafeLocPenetrationAvoidanceRays;                   // 0x688(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               SafeLocationOffset;                                // 0x698(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorVector                SafeLocationInterpolator;                          // 0x6B0(0x78)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bValidateSafeLoc : 1;                              // Mask: 0x1, PropSize: 0x10x728(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bPreventCameraPenetration : 1;                     // Mask: 0x2, PropSize: 0x10x728(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bDoPredictiveAvoidance : 1;                        // Mask: 0x4, PropSize: 0x10x728(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_D3 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1986[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PenetrationBlendInTime;                            // 0x72C(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PenetrationBlendOutTime;                           // 0x730(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1989[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LastSafeLocationLocal;                             // 0x738(0x18)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        LastPenetrationBlockedPct;                         // 0x750(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_198B[0xE4];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bDrawDebugPivot;                                   // 0x838(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugLookat;                                  // 0x839(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugSafeLoc;                                 // 0x83A(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugPenetrationAvoidance;                    // 0x83B(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_198D[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCam_ThirdPerson* GetDefaultObj();

};

// 0x8C0 (0x4280 - 0x39C0)
// Class SP_Camera.SPPlayerCameraManager
class ASPPlayerCameraManager : public APlayerCameraManager
{
public:
	float                                        BasePelvisRelativeZ;                               // 0x39C0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PelvisBoneName;                                    // 0x39C4(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_19D7[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                AltViewTarget;                                     // 0x39D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_19D9[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                SavedMainViewTarget;                               // 0x39E8(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FActiveSPCamera>               CameraBlendStack;                                  // 0x39F0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FSPCameraModeInstance>         CameraModeInstances;                               // 0x3A00(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_19DD[0x870];                                   // Fixing Size Of Struct > TateDumper <

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
	void IsUsingAlternateCamera(bool* ReturnValue);
	void GetCurrentCameraMode(class USPCameraMode** ReturnValue);
	void GetCameraClassForCharacter(class AActor** InViewTarget, class UClass** ReturnValue);
	void ConfigureAlternateCamera(class UClass** NewAltCameraMode, class AActor* NewAltViewTarget, float NewAltCameraTransitionTime);
	void ClearAlternateCamera();
};

}


