#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4F0 - 0x4D0)
// BlueprintGeneratedClass MainMenu.MainMenu_C
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       Counter;                                           // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class USphereReflectionCaptureComponent*     CaptureComp;                                       // 0x4E0(0x8)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class AShooterMatineeActor*                  MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x4E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void K2Node_MatineeController_1_MatineeEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void ShowVisualSettingsPP();
	void HideVisualSettingsPP();
	class UReMainMenuUI_ASA_C* ExecuteUbergraph_MainMenu(int32 EntryPoint, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance);
};

}


