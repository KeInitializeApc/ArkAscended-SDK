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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       Counter;                                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, GlobalConfig, InstancedReference, SubobjectReference)
	class USphereReflectionCaptureComponent*     CaptureComp;                                       // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class AShooterMatineeActor*                  MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x4E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void K2Node_MatineeController_1_MatineeEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void ShowVisualSettingsPP();
	void HideVisualSettingsPP();
	bool ExecuteUbergraph_MainMenu(int32 EntryPoint, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UReMainMenuUI_ASA_C* CallFunc_Create_ReturnValue);
};

}


