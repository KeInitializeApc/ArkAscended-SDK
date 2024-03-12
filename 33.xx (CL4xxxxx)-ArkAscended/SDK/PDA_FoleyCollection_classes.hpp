#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x90 - 0x30)
// BlueprintGeneratedClass PDA_FoleyCollection.PDA_FoleyCollection_C
class UPDA_FoleyCollection_C : public UPrimaryDataAsset
{
public:
	class USoundBase*                            Generic_short;                                     // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Greneric_quick;                                    // 0x38(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Generic_medium;                                    // 0x40(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Climb;                                             // 0x48(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Jump;                                              // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig)
	class USoundBase*                            Land;                                              // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Pullback;                                          // 0x60(0x8)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Sprint;                                            // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Stab;                                              // 0x70(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Swing;                                             // 0x78(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            Turn;                                              // 0x80(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Walk;                                              // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)

	static class UClass* StaticClass();
	static class UPDA_FoleyCollection_C* GetDefaultObj();

};

}


