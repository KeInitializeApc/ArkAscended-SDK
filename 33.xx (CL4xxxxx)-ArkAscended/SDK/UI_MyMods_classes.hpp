#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA28 - 0xA10)
// WidgetBlueprintGeneratedClass UI_MyMods.UI_MyMods_C
class UUI_MyMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                SortOption;                                        // 0xA18(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_MyMods_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool UpdatePagination(bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default);
	void GetMods();
	void Destruct();
	void Construct();
	bool ExecuteUbergraph_UI_MyMods(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2);
};

}


