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

// 0x258 (0x258 - 0x0)
// UserDefinedStruct Foot_Locking_IK.Foot_Locking_IK
struct FFoot_Locking_IK
{
public:
	class FName                                  Def_AnkleBoneName_76_5CE294D3477B05D288E6DBB35FED018A; // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	class FName                                  Def_BaseBoneName_36_F601CCA143AD2DE9338EC9AD27B97BF8; // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	class FName                                  Def_HipBoneName_74_78F682C146E9BA4183449C91B7AA30AF; // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	class FName                                  Def_KneeBoneName_79_1C27D6CA442F6CC3944CC9BCF317F687; // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	class FName                                  Def_BallBoneName_146_ACD392664193BB66624CFF9E973501C0; // 0x20(0x8)(Edit, ConstParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	class FName                                  Lock_Def_CurveName_75_976917084AC0B2CA66E1F1AB64D889C0; // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       Lock_Def_Max_IK_Distance_Offset_100_32D7CD6B4CE96AEF976271A9B40DEAC6; // 0x30(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       Lock_Def_BreakCooldownTime_110_BDF59B4D4DC1A0E27114A7A64F143563; // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       IK_Def_MaxRotationOffset_35_2733B91049B72F29629EACA4C53D7E38; // 0x40(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       IK_Def_Trace_Distance_Above_38_12D6CC73426C5AAFC5D80383848BD85E; // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       IK_Def_Trace_Distance_Below_39_B804B1F94B48E2B526B30BA48863C023; // 0x50(0x8)(BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       IK_Def_Trace_Radius_94_45B28BA04E7A9595EBC478A36DD2B630; // 0x58(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         IK_Def_UseBall_148_5636A44F4E7D428C372F2187B8E870CC; // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         Lock_On_81_9E13132A47927E1B66EBA19EB3D94E2A;       // 0x61(0x1)(ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A95[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Lock_Location_5_2FE668C2458943F82771499F5980D77E;  // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FRotator                              Lock_Rotation_53_7DAA3BBC4C85E80961B839BA897C79A3; // 0x80(0x18)(Edit, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A97[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Lock_Ankle_Transform_84_0293B8E14BB36BAB5810DAA0153BB127; // 0xA0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       Lock_Alpha_8_3DEBEF7F4B6E0BE78E0E519150F8AB08;     // 0x100(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       Lock_Alpha_Target_87_AF2293D4431C7B343BB2E7A62CDA7166; // 0x108(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         Lock_BreakingIKConstraint_50_E538673C44FFA67BC22EBD90D6D500C0; // 0x110(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A9B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Lock_BreakingIKConstraint_CooldownTimer_96_CDC21E4F4D34513FCA4A1593087E8F21; // 0x118(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       Lock_Max_IK_Distance_56_46E5F21246DD299A295713835A5D55EF; // 0x120(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         Lock_CurveWasBelowThreshold_121_F2E24AAC45F95C4192364CB71B87DE15; // 0x128(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A9D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               IK_OffsetLocation_21_79DDED484449A249056F058CADF723B9; // 0x130(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               IK_OffsetLocationTarget_22_53E5BD1E48B589F16E8B08A562C55762; // 0x148(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               IK_ImpactLocation_124_3A5BAA86472E9164ECA4F29DC4B1C110; // 0x160(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FRotator                              IK_OffsetRotation_24_5A6DE2BF402F85651B1CC8A70B78F67D; // 0x178(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FRotator                              IK_OffsetRotationTarget_26_EB573CF24ADB847C78EAC9B1079D2231; // 0x190(0x18)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               IK_HitImpactNormal_139_9D37364D4D3AC8EFBB1E6AB9540809D9; // 0x1A8(0x18)(Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               IK_FloorNormal_42_B2CB07A34CC3EECBD22775B26736D0D5; // 0x1C0(0x18)(Edit, ExportObject, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               IK_FloorNormalTarget_48_DAF404BA48AAD452AFBBB39219A75052; // 0x1D8(0x18)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       IK_FloorTouchingOffset_45_7394FBD44758675E967916899D205603; // 0x1F0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	double                                       IK_FloorTouchingOffsetTarget_106_20AD2D7D4F831BEF796A578F91C4962E; // 0x1F8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         IK_TraceHit_60_C344C65C48F0ECE3065E78AF539E8504;   // 0x200(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AA1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               IK_ProbeVelocity_103_3CE6436F4C9C9EDC00625CAAA4F82276; // 0x208(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	class UPhysicalMaterial*                     IK_TraceHitPhysMat_116_241004FC49B112C4B840689E9BBFD0C0; // 0x220(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               IK_WorldLocationSmoothed_127_F742CD11439175A67F304FBFE3BB01E3; // 0x228(0x18)(Edit, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FVector                               LastPosition_119_C42BB66F477B4C73BF58CAB355B3EFCD; // 0x240(0x18)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
};

}


