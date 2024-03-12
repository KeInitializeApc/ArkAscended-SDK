#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x370 - 0x340)
// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C
class UASAUI_NewsCarouselTemplate_Entry_CTA_C : public UUI_MenuCarouselEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                MainImage;                                         // 0x348(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtStart;                             // 0x350(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       DefaultAutoScrollSpeed;                            // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollTracker;                                 // 0x360(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       AutoScrollWaitAtEnd;                               // 0x368(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_NewsCarouselTemplate_Entry_CTA_C* GetDefaultObj();

	class FString BlueprintInit();
	bool EntryFocusStart();
	bool EntryFocusEnd();
	float EntryFocusTick();
	bool ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA(int32* EntryPoint, float K2Node_Event_DeltaTime);
};

}


