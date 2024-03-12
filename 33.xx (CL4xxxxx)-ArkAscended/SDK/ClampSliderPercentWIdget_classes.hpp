#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass ClampSliderPercentWIdget.ClampSliderPercentWIdget_C
class UClampSliderPercentWIdget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                Image_4;                                           // 0x338(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional)

	static class UClass* StaticClass();
	static class UClampSliderPercentWIdget_C* GetDefaultObj();

	void SetEnabled(bool Enable);
	struct FLinearColor ExecuteUbergraph_ClampSliderPercentWIdget(int32* EntryPoint, bool K2Node_CustomEvent_Enable);
};

}


