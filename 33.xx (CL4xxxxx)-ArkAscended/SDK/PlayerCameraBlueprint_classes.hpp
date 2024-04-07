#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5E10 - 0x5E00)
// BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C
class APlayerCameraBlueprint_C : public AShooterPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E00(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AWaterInteractionBP_C*                 FluidInteractionManager;                           // 0x5E08(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerCameraBlueprint_C* GetDefaultObj();

	void ReceiveDestroyed();
	void Spawn_Water_Interaction_Comp_And_Attach_To_Camera();
	bool ExecuteUbergraph_PlayerCameraBlueprint(int32* EntryPoint);
};

}


