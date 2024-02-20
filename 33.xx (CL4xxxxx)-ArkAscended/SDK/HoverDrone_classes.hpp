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
	uint8                                        Pad_1B8[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxAllowedSpeedIndex;                              // 0x1A8(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MaxAllowedSpeedUpdated;                            // 0x1B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BB[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DirectRotationInputYawScale;                       // 0x208(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        DirectRotationInputPitchScale;                     // 0x20C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BC[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DirectRotationInputInterpSpeed;                    // 0x228(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseFOVScaling;                                    // 0x22C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CameraFovRange;                                    // 0x230(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             InputFovScaleRange;                                // 0x240(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotAcceleration;                                   // 0x250(0x4)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotDeceleration;                                   // 0x254(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxPitchRotSpeed;                                  // 0x258(0x4)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxYawRotSpeed;                                    // 0x25C(0x4)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        FullAirFrictionVelocity;                           // 0x260(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MovementAccelFactor;                               // 0x268(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C4[0x170];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters;                              // 0x3F0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters_NewModel;                     // 0x400(0x10)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Acceleration_NewModel;                             // 0x410(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Deceleration_NewModel;                             // 0x414(0x4)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpeed_NewModel;                                 // 0x418(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxYawRotSpeed_NewModel;                           // 0x41C(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxPitchRotSpeed_NewModel;                         // 0x420(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotAcceleration_NewModel;                          // 0x424(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotDeceleration_NewModel;                          // 0x428(0x4)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseNewDroneFlightModel;                           // 0x42C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinAirFriction;                                    // 0x430(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        DroneSpeedParamIndex;                              // 0x434(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpeedHeight;                                    // 0x43C(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpeedHeight;                                    // 0x440(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpeedHeightMultiplier;                          // 0x444(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinPitch;                                          // 0x448(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxPitch;                                          // 0x44C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DroneMaxAltitude;                                  // 0x454(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinHoverHeight;                                    // 0x460(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaintainHoverHeightTolerance;                      // 0x464(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaintainHoverHeightPredictionTime;                 // 0x468(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D2[0x3C];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ForceFacingInterpInTime;                           // 0x4A8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bSimulateRotation : 1;                             // Mask: 0x1, PropSize: 0x10x4AC(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bIgnoreDroneLimiters : 1;                          // Mask: 0x2, PropSize: 0x10x4AC(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_F : 6;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1D3[0x33];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FollowedActorPositionInterpSpeed;                  // 0x4E0(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D4[0x6C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoverDroneMovementComponent* GetDefaultObj();

	void StopForceFacing();
	void SetCurrentFOV(float* NewFOV);
	void ForceFacing(struct FVector* Location);
	void AddVelocity(struct FVector* VelocityImpulse);
	void AddRotationalVelocity(struct FRotator* RotationalVel);
};

// 0x8 (0x5B8 - 0x5B0)
// Class HoverDrone.HoverDronePawnBase
class AHoverDronePawnBase : public ADefaultPawn
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x5B0(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AHoverDronePawnBase* GetDefaultObj();

};

// 0xD0 (0x688 - 0x5B8)
// Class HoverDrone.HoverDronePawn
class AHoverDronePawn : public AHoverDronePawnBase
{
public:
	bool                                         bIsTiltingEnabled;                                 // 0x5B8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowSpeedChange;                                 // 0x5B9(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bConstrainMovementToXYPlane;                       // 0x5BA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIIRInterpolatorRotator               DroneTiltInterpolator;                             // 0x5C0(0x78)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               TiltUpVector;                                      // 0x638(0x18)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableTiltLimits;                                 // 0x650(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              TiltLimits;                                        // 0x658(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ED[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AHoverDronePawn* GetDefaultObj();

	float TurnAccel();
	void SetToDefaultDroneSpeedIndex();
	int32 SetDroneSpeedIndex();
	bool SetAllowSpeedChange();
	float MoveUp();
	float LookUpAccel();
	void IsMaintainingConstantAltitude(bool ReturnValue);
	float GetTiltedDroneRotation(const struct FRotator& ReturnValue);
	void GetDroneSpeedIndex(int32 ReturnValue);
	void GetAltitude(float ReturnValue);
	void EndLookat();
	void BeginLookat();
};

// 0x8 (0x520 - 0x518)
// Class HoverDrone.HoverDroneSpeedLimitBox
class AHoverDroneSpeedLimitBox : public AVolume
{
public:
	int32                                        MaxAllowedSpeedIndex;                              // 0x518(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F7[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AHoverDroneSpeedLimitBox* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class HoverDrone.HoverDroneVolumeManager
class UHoverDroneVolumeManager : public UGameInstanceSubsystem
{
public:
	TSet<class AHoverDroneSpeedLimitBox*>        SpeedLimitBoxes;                                   // 0x30(0x50)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TSet<class ABlockingVolume*>                 BlockingVolumes;                                   // 0x80(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoverDroneVolumeManager* GetDefaultObj();

};

}


