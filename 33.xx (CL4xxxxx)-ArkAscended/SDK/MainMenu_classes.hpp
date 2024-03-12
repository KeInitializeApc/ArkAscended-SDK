#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4E8 - 0x4C8)
// BlueprintGeneratedClass MainMenu.MainMenu_C
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       Counter;                                           // 0x4D0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USphereReflectionCaptureComponent*     CaptureComp;                                       // 0x4D8(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AShooterMatineeActor*                  MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x4E0(0x8)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class AMainMenu_C* GetDefaultObj();

	void K2Node_MatineeController_1_MatineeEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void ShowVisualSettingsPP();
	void HideVisualSettingsPP();
	class UShooterGameInstance* ExecuteUbergraph_MainMenu(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, class UReMainMenuUI_ASA_C* CallFunc_Create_ReturnValue);
};

}


