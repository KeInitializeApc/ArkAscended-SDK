#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x354 - 0x330)
// WidgetBlueprintGeneratedClass WBP_PriceColumns.WBP_PriceColumns_C
class UWBP_PriceColumns_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            TB_COUNT;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TB_SumPrice;                                       // 0x340(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	double                                       Price;                                             // 0x348(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Count;                                             // 0x350(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UWBP_PriceColumns_C* GetDefaultObj();

	bool PreConstruct();
	void Construct();
	class FText ExecuteUbergraph_WBP_PriceColumns(int32 EntryPoint, int64* CallFunc_Conv_IntToInt64_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1);
};

}


