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
	class USoundBase*                            Generic_short;                                     // 0x30(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class USoundBase*                            Greneric_quick;                                    // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class USoundBase*                            Generic_medium;                                    // 0x40(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class USoundBase*                            Climb;                                             // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class USoundBase*                            Jump;                                              // 0x50(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig)
	class USoundBase*                            Land;                                              // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class USoundBase*                            Pullback;                                          // 0x60(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class USoundBase*                            Sprint;                                            // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class USoundBase*                            Stab;                                              // 0x70(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class USoundBase*                            Swing;                                             // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class USoundBase*                            Turn;                                              // 0x80(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class USoundBase*                            Walk;                                              // 0x88(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)

	static class UClass* StaticClass();
	static class UPDA_FoleyCollection_C* GetDefaultObj();

};

}

