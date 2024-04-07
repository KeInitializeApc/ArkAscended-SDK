#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x178 - 0x0)
// UserDefinedStruct UDS_and_UDW_State.UDS_and_UDW_State
struct FUDS_and_UDW_State
{
public:
	double                                       TimeofDay_2_2DF54613424D82C28D8AF38B5CCC017E;      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FDateTime                             SimulationDate_6_6AAFF3384452285DB969FABE6CC7502E; // 0x8(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TotalDaysElapsed_10_85A4D6E54B4BA738A5AAD08B278168AC; // 0x10(0x4)(Edit, ConstParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       UDS_CloudCoverage_14_5BE3DD95403439E0DC4FC7B950B72734; // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MoonPhase_16_00C2557E44B4CE73A824F2977842EF06;     // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IncludesUDWState_19_4B877A784EE94D12717D3998B8494AC4; // 0x28(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52E5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRandomWeatherVariation_State         UDWRandomWeatherState_27_74741D5149E4365461FC87BA73842B8C; // 0x30(0x20)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class AActor*, struct FRandomWeatherVariation_State> WeatherOverrideVolumeStates_87_56B54B4D46756590EAD0B08CF93C14E3; // 0x50(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TransitionState_35_8C2DC6CD4C7139677FD63AA06BA2C6F4; // 0xA0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52E6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Rain_77_C55FBB284F0FA74378B1C39AC4A25456;          // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CloudCoverage_71_02CFC88541ECA075F65C67BAD5B8203D; // 0xB0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Snow_78_9681DBA0451D944F00450C8885948EAA;          // 0xB8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       WindIntensity_73_8CA9E58B4FAD1966869DACA837B2A72D; // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999; // 0xC8(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65; // 0xD0(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291; // 0xD8(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Timer_65_5497A6734CE6FEB9AD91B28233665806;         // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364; // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004; // 0xF0(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUDS_Weather_Settings_C*               WeatherType_76_08B587F84A8CD9310B9F92A3DA6F0430;   // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Fog_81_AB014F324CE4705268C835AA3B28780F;           // 0x100(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Dust_83_C8EF6CC546A4F7465C50638A87E6A9DF;          // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       ThunderLightning_85_D0D5D684439450DDEB610BB9887DFA49; // 0x110(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldCloudCoverage_90_9DA4B7F2482756F255C9F3ACEA84CEB6; // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldRain_92_2D7B3F404B01E98C1B62FC823CF05DF0;       // 0x120(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldWindIntensity_94_7BC1A37A41701A2B8E6C209D587237E7; // 0x128(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldSnow_96_426BC726469C3D0110892CB349FCEB42;       // 0x130(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldThunderLightning_98_E14B8AC9466340F5002D58ACB121FF69; // 0x138(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldFog_100_AA682BF94677D2B24155EFA05CAF9554;       // 0x140(0x8)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldDust_102_44BDD5874F97511F1FFA7C956D9A3761;      // 0x148(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldMaterialWetness_104_D03595C246E3BDFC836DC7863893F348; // 0x150(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldMaterialSnowCoverage_106_3517C89C408AFCDFC97F98A3701F4AD1; // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldMaterialDustCoverage_108_DFEDC41542E57030BBCC1C9BA56F5327; // 0x160(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       OldLerptoStaticSettings_110_B2656AFF4C934F6396DFE1B54A896FEB; // 0x168(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       TransitionInTime_112_6C36DE934526345F443A3D87ADD96AA1; // 0x170(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}


