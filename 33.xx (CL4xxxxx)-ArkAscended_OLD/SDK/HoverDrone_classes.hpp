#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C0 (0x550 - 0x190)
// Class HoverDrone.HoverDroneMovementComponent
class UHoverDroneMovementComponent : public USpectatorPawnMovement
{
public:
	uint8                                        Pad_16F4[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxAllowedSpeedIndex;                              // 0x1A8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MaxAllowedSpeedUpdated;                            // 0x1B0(0x10)(BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16F9[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        DirectRotationInputYawScale;                       // 0x208(0x4)(Edit, Net, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DirectRotationInputPitchScale;                     // 0x20C(0x4)(Edit, BlueprintReadOnly, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16FA[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        DirectRotationInputInterpSpeed;                    // 0x228(0x4)(Edit, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseFOVScaling;                                    // 0x22C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CameraFovRange;                                    // 0x230(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             InputFovScaleRange;                                // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotAcceleration;                                   // 0x250(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotDeceleration;                                   // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitchRotSpeed;                                  // 0x258(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxYawRotSpeed;                                    // 0x25C(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        FullAirFrictionVelocity;                           // 0x260(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1702[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MovementAccelFactor;                               // 0x268(0x18)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1704[0x170];                                   // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters;                              // 0x3F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters_NewModel;                     // 0x400(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Acceleration_NewModel;                             // 0x410(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Deceleration_NewModel;                             // 0x414(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxSpeed_NewModel;                                 // 0x418(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxYawRotSpeed_NewModel;                           // 0x41C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitchRotSpeed_NewModel;                         // 0x420(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotAcceleration_NewModel;                          // 0x424(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotDeceleration_NewModel;                          // 0x428(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseNewDroneFlightModel;                           // 0x42C(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_170E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinAirFriction;                                    // 0x430(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DroneSpeedParamIndex;                              // 0x434(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1710[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpeedHeight;                                    // 0x43C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxSpeedHeight;                                    // 0x440(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxSpeedHeightMultiplier;                          // 0x444(0x4)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinPitch;                                          // 0x448(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitch;                                          // 0x44C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1718[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DroneMaxAltitude;                                  // 0x454(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1719[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinHoverHeight;                                    // 0x460(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaintainHoverHeightTolerance;                      // 0x464(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaintainHoverHeightPredictionTime;                 // 0x468(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_171B[0x3C];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        ForceFacingInterpInTime;                           // 0x4A8(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bSimulateRotation : 1;                             // Mask: 0x1, PropSize: 0x10x4AC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIgnoreDroneLimiters : 1;                          // Mask: 0x2, PropSize: 0x10x4AC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_D5 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_171D[0x33];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        FollowedActorPositionInterpSpeed;                  // 0x4E0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_171E[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoverDroneMovementComponent* GetDefaultObj();

	void StopForceFacing();
	float SetCurrentFOV();
	void ForceFacing(struct FVector* Location);
	struct FVector AddVelocity();
	struct FRotator AddRotationalVelocity();
};

// 0x8 (0x5B0 - 0x5A8)
// Class HoverDrone.HoverDronePawnBase
class AHoverDronePawnBase : public ADefaultPawn
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x5A8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AHoverDronePawnBase* GetDefaultObj();

};

// 0xD0 (0x680 - 0x5B0)
// Class HoverDrone.HoverDronePawn
class AHoverDronePawn : public AHoverDronePawnBase
{
public:
	bool                                         bIsTiltingEnabled;                                 // 0x5B0(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowSpeedChange;                                 // 0x5B1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bConstrainMovementToXYPlane;                       // 0x5B2(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1768[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIIRInterpolatorRotator               DroneTiltInterpolator;                             // 0x5B8(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               TiltUpVector;                                      // 0x630(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableTiltLimits;                                 // 0x648(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_176A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              TiltLimits;                                        // 0x650(0x18)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_176B[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AHoverDronePawn* GetDefaultObj();

	void TurnAccel(float Val);
	void SetToDefaultDroneSpeedIndex();
	void SetDroneSpeedIndex(int32 SpeedIndex);
	void SetAllowSpeedChange(bool* bOnOff);
	void MoveUp(float Val);
	void LookUpAccel(float Val);
	void IsMaintainingConstantAltitude(bool* ReturnValue);
	float GetTiltedDroneRotation(struct FRotator* ReturnValue);
	void GetDroneSpeedIndex(int32* ReturnValue);
	void GetAltitude(float* ReturnValue);
	void EndLookat();
	void BeginLookat();
};

// 0x8 (0x520 - 0x518)
// Class HoverDrone.HoverDroneSpeedLimitBox
class AHoverDroneSpeedLimitBox : public AVolume
{
public:
	int32                                        MaxAllowedSpeedIndex;                              // 0x518(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1772[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AHoverDroneSpeedLimitBox* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class HoverDrone.HoverDroneVolumeManager
class UHoverDroneVolumeManager : public UGameInstanceSubsystem
{
public:
	TSet<class AHoverDroneSpeedLimitBox*>        SpeedLimitBoxes;                                   // 0x30(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class ABlockingVolume*>                 BlockingVolumes;                                   // 0x80(0x50)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1776[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoverDroneVolumeManager* GetDefaultObj();

};

}


