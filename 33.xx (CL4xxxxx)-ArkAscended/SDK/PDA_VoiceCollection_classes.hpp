#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x1E0 - 0x30)
// BlueprintGeneratedClass PDA_VoiceCollection.PDA_VoiceCollection_C
class UPDA_VoiceCollection_C : public UPrimaryDataAsset
{
public:
	TArray<struct FPlayerStatusStateCharacterSound> CharacterStatusStateSounds;                        // 0x30(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            Climb;                                             // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            Melee;                                             // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, SubobjectReference)
	class USoundBase*                            Swing;                                             // 0x50(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            Run;                                               // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            Winded;                                            // 0x60(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Config, SubobjectReference)
	class USoundBase*                            Jump;                                              // 0x68(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class USoundBase*                            Land;                                              // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, SubobjectReference)
	class USoundBase*                            Hurt;                                              // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, SubobjectReference)
	class USoundBase*                            Death;                                             // 0x80(0x8)(ExportObject, Config, SubobjectReference)
	class USoundBase*                            Eat;                                               // 0x88(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Config, SubobjectReference)
	class USoundBase*                            Drink;                                             // 0x90(0x8)(BlueprintVisible, ExportObject, Config, SubobjectReference)
	class USoundBase*                            Wake;                                              // 0x98(0x8)(ConstParm, Net, EditFixedSize, Parm, Config, SubobjectReference)
	class USoundBase*                            Snore;                                             // 0xA0(0x8)(ConstParm, BlueprintVisible, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            Yawn;                                              // 0xA8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, Config, SubobjectReference)
	class USoundBase*                            EmergeWater;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, SubobjectReference)
	class USoundBase*                            Cold;                                              // 0xB8(0x8)(Edit, BlueprintVisible, Config, SubobjectReference)
	class USoundBase*                            Hot;                                               // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, SubobjectReference)
	class USoundBase*                            Suffer;                                            // 0xC8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            Infected;                                          // 0xD0(0x8)(ConstParm, EditFixedSize, Config, SubobjectReference)
	class USoundBase*                            Drown;                                             // 0xD8(0x8)(BlueprintReadOnly, Config, SubobjectReference)
	class USoundBase*                            OnFire;                                            // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, Config, SubobjectReference)
	class USoundBase*                            Earthquake;                                        // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Config, SubobjectReference)
	class USoundBase*                            Gas;                                               // 0xF0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Config, SubobjectReference)
	class USoundBase*                            Mushroom;                                          // 0xF8(0x8)(ConstParm, Parm, Config, SubobjectReference)
	class USoundBase*                            Radiation;                                         // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, SubobjectReference)
	class USoundBase*                            ChestBurst;                                        // 0x108(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            Refreshed;                                         // 0x110(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, Config, SubobjectReference)
	class USoundBase*                            Cheer;                                             // 0x118(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            Scared;                                            // 0x120(0x8)(ConstParm, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            Chestpound;                                        // 0x128(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            Chicken;                                           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            Friendly;                                          // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Config, SubobjectReference)
	class USoundBase*                            Laugh;                                             // 0x140(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, SubobjectReference)
	class USoundBase*                            Yes;                                               // 0x148(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            No;                                                // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            Salute;                                            // 0x158(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, SubobjectReference)
	class USoundBase*                            Santa;                                             // 0x160(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, SubobjectReference)
	class USoundBase*                            Sorry;                                             // 0x168(0x8)(ConstParm, ExportObject, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            Taunt;                                             // 0x170(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            Thank;                                             // 0x178(0x8)(Edit, EditFixedSize, Parm, Config, SubobjectReference)
	class USoundBase*                            Wave;                                              // 0x180(0x8)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            Flex;                                              // 0x188(0x8)(BlueprintVisible, Net, Config, SubobjectReference)
	class USoundBase*                            Kiss;                                              // 0x190(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Config, SubobjectReference)
	class USoundBase*                            Pet;                                               // 0x198(0x8)(Edit, ConstParm, ExportObject, Parm, Config, SubobjectReference)
	class USoundBase*                            Spawn;                                             // 0x1A0(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate)
	class USoundBase*                            Attack;                                            // 0x1A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            Move;                                              // 0x1B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, SubobjectReference)
	class USoundBase*                            FollowSingle;                                      // 0x1B8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Config, SubobjectReference)
	class USoundBase*                            FollowAll;                                         // 0x1C0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Config, SubobjectReference)
	class USoundBase*                            StaySingle;                                        // 0x1C8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            StayAll;                                           // 0x1D0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Config, SubobjectReference)
	class USoundBase*                            VoiceDemo;                                         // 0x1D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPDA_VoiceCollection_C* GetDefaultObj();

};

}


