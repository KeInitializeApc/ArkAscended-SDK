#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xB80 - 0xB71)
// BlueprintGeneratedClass Buff_Glider_Base.Buff_Glider_Base_C
class ABuff_Glider_Base_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_52CC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           Ref_GliderItem;                                    // 0xB78(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Glider_Base_C* GetDefaultObj();

};

}


