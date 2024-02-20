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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Counter;                                           // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class USphereReflectionCaptureComponent*     CaptureComp;                                       // 0x4E0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class AShooterMatineeActor*                  MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x4E8(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void K2Node_MatineeController_1_MatineeEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void ShowVisualSettingsPP();
	void HideVisualSettingsPP();
	class UReMainMenuUI_ASA_C* ExecuteUbergraph_MainMenu(class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance);
};

}


