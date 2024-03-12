#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4C8 - 0x4C0)
// Class CableComponent.CableActor
class ACableActor : public AActor
{
public:
	class UCableComponent*                       CableComponent;                                    // 0x4C0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class ACableActor* GetDefaultObj();

};

// 0xB0 (0x780 - 0x6D0)
// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent
{
public:
	bool                                         bAttachStart;                                      // 0x6D0(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAttachEnd;                                        // 0x6D1(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B2F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FComponentReference                   AttachEndTo;                                       // 0x6D8(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  AttachEndToSocketName;                             // 0x700(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               EndLocation;                                       // 0x708(0x18)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CableLength;                                       // 0x720(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumSegments;                                       // 0x724(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        SubstepTime;                                       // 0x728(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SolverIterations;                                  // 0x72C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst)
	bool                                         bEnableStiffness;                                  // 0x730(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseSubstepping;                                   // 0x731(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSkipCableUpdateWhenNotVisible;                    // 0x732(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSkipCableUpdateWhenNotOwnerRecentlyRendered;      // 0x733(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x734(0x1)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B30[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CollisionFriction;                                 // 0x738(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B31[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CableForce;                                        // 0x740(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CableGravityScale;                                 // 0x758(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CableWidth;                                        // 0x75C(0x4)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumSides;                                          // 0x760(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        TileMaterial;                                      // 0x764(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B33[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCableComponent* GetDefaultObj();

	class USceneComponent* SetAttachEndToComponent(class FName* SocketName);
	class FName SetAttachEndTo(class AActor** Actor, class FName* SocketName);
	TArray<struct FVector> GetCableParticleLocations();
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};

}


