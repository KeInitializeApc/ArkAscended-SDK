#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4D0 - 0x4C8)
// Class CableComponent.CableActor
class ACableActor : public AActor
{
public:
	class UCableComponent*                       CableComponent;                                    // 0x4C8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class ACableActor* GetDefaultObj();

};

// 0xB8 (0x790 - 0x6D8)
// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent
{
public:
	bool                                         bAttachStart;                                      // 0x6D8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAttachEnd;                                        // 0x6D9(0x1)(Edit, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_DF1[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FComponentReference                   AttachEndTo;                                       // 0x6E0(0x28)(ConstParm, ExportObject, Net, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  AttachEndToSocketName;                             // 0x708(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               EndLocation;                                       // 0x710(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CableLength;                                       // 0x728(0x4)(BlueprintReadOnly, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumSegments;                                       // 0x72C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        SubstepTime;                                       // 0x730(0x4)(Edit, ExportObject, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        SolverIterations;                                  // 0x734(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	bool                                         bEnableStiffness;                                  // 0x738(0x1)(OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseSubstepping;                                   // 0x739(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSkipCableUpdateWhenNotVisible;                    // 0x73A(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSkipCableUpdateWhenNotOwnerRecentlyRendered;      // 0x73B(0x1)(BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x73C(0x1)(Edit, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_E02[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CollisionFriction;                                 // 0x740(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E04[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CableForce;                                        // 0x748(0x18)(EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CableGravityScale;                                 // 0x760(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CableWidth;                                        // 0x764(0x4)(BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumSides;                                          // 0x768(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TileMaterial;                                      // 0x76C(0x4)(Edit, ExportObject, Net, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E08[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCableComponent* GetDefaultObj();

	class FName SetAttachEndToComponent(class USceneComponent** Component);
	class FName SetAttachEndTo(class AActor** Actor);
	void GetCableParticleLocations(const TArray<struct FVector>& Locations);
	void GetAttachedComponent(class USceneComponent** ReturnValue);
	void GetAttachedActor(class AActor** ReturnValue);
};

}


