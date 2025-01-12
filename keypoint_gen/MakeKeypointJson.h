//csv format to json format for  smartAL
//by Kiok Ahn (kiokahn@gazzi.ai, http://gazzi.ai)
//2022-08-25

#pragma once

std::wstring rename_label_22(const std::string& label);
std::wstring rename_label_30(const std::string& label);


struct ElementAnnotation
{
	std::string lable;
	//std::string type;
	std::string time_unit_name;
	float time_stamp;

	std::vector< std::string > keypoint_names;
	std::vector< graphics::vec2 > keypoints;
};

class MakeKeypointJson
{
public:
	MakeKeypointJson();
	~MakeKeypointJson();

protected:
	Document* m_pdoc;
	
	Value* m_paryAnnotation;
	Value* m_paryPose;

	void create(void);
	void distory(void);

public:
	void AddPose(const ElementAnnotation* annotation);//for 30 keypoints
	void AddAnnotation(void); 
	bool FileWrite(FILE* fp, bool isPretty = false);

};

class MakeKeypointJson30 :public MakeKeypointJson
{
public:
	MakeKeypointJson30(void) {};
	~MakeKeypointJson30(void) {};
};

class MakeKeypointJson22 :public MakeKeypointJson
{
public:
	MakeKeypointJson22(void) {};
	~MakeKeypointJson22(void) {};
public:
	void AddPose(const ElementAnnotation* annotation);//for 22 keypoints
};

//output json sample
/*
{
	"annotation": [
		{
			"pose": {
				"location": {
					"������ �� ��": {
						"x": 1152,
						"y": 597,
						"view": 1
					},
					"������ �ߵ޲�ġ": {
						"x": 1160,
						"y": 588,
						"view": 1
					},
					"������ ��": {
						"x": 1172,
						"y": 567,
						"view": 1
					},
					"������ �ٸ�": {
						"x": 1196,
						"y": 488,
						"view": 1
					},
					"������ �����": {
						"x": 1225,
						"y": 405,
						"view": 1
					},
					"���� �� ��": {
						"x": 1307,
						"y": 587,
						"view": 1
					},
					"���� �ߵ޲�ġ": {
						"x": 1304,
						"y": 577,
						"view": 1
					},
					"���� ��": {
						"x": 1299,
						"y": 556,
						"view": 1
					},
					"���� �ٸ�": {
						"x": 1285,
						"y": 493,
						"view": 1
					},
					"���� �����": {
						"x": 1264,
						"y": 409,
						"view": 1
					},
					"������ �� ��": {
						"x": 1096,
						"y": 407,
						"view": 1
					},
					"������ ��": {
						"x": 1106,
						"y": 393,
						"view": 1
					},
					"������ �ո�": {
						"x": 1146,
						"y": 361,
						"view": 1
					},
					"������ ��": {
						"x": 1192,
						"y": 319,
						"view": 1
					},
					"������ ���": {
						"x": 1223,
						"y": 318,
						"view": 1
					},
					"���� �� ��": {
						"x": 1279,
						"y": 424,
						"view": 1
					},
					"���� ��": {
						"x": 1284,
						"y": 408,
						"view": 1
					},
					"���� �ո�": {
						"x": 1294,
						"y": 361,
						"view": 1
					},
					"���� ��": {
						"x": 1274,
						"y": 315,
						"view": 1
					},
					"���� ���": {
						"x": 1243,
						"y": 317,
						"view": 1
					},
					"�Ӹ� ��": {
						"x": 1213,
						"y": 249,
						"view": 1
					},
					"�Ӹ�": {
						"x": 1224,
						"y": 290,
						"view": 1
					},
					"��": {
						"x": 1231,
						"y": 306,
						"view": 1
					},
					"ô��4": {
						"x": 1232,
						"y": 309,
						"view": 1
					},
					"ô��3": {
						"x": 1237,
						"y": 328,
						"view": 1
					},
					"ô��2": {
						"x": 1240,
						"y": 346,
						"view": 1
					},
					"ô��1": {
						"x": 1242,
						"y": 363,
						"view": 1
					},
					"ô��0": {
						"x": 1244,
						"y": 382,
						"view": 1
					},
					"������": {
						"x": 1245,
						"y": 399,
						"view": 1
					},
					"��": {
						"x": 1199,
						"y": 288,
						"view": 1
					}
				},
				"label": "������",
				"type": "pose"
			}
		},
		{
			"pose": {
				"location": {
					"������ �� ��": {
						"x": 1084,
						"y": 662,
						"view": 1
					},
					"������ �ߵ޲�ġ": {
						"x": 1099,
						"y": 668,
						"view": 1
					},
					"������ ��": {
						"x": 1122,
						"y": 668,
						"view": 1
					},
					"������ �ٸ�": {
						"x": 1114,
						"y": 580,
						"view": 1
					},
					"������ �����": {
						"x": 1149,
						"y": 537,
						"view": 1
					},
					"���� �� ��": {
						"x": 1073,
						"y": 758,
						"view": 1
					},
					"���� �ߵ޲�ġ": {
						"x": 1092,
						"y": 764,
						"view": 1
					},
					"���� ��": {
						"x": 1125,
						"y": 761,
						"view": 1
					},
					"���� �ٸ�": {
						"x": 1096,
						"y": 655,
						"view": 1
					},
					"���� �����": {
						"x": 1104,
						"y": 542,
						"view": 1
					},
					"������ �� ��": {
						"x": 1090,
						"y": 415,
						"view": 1
					},
					"������ ��": {
						"x": 1103,
						"y": 415,
						"view": 1
					},
					"������ �ո�": {
						"x": 1124,
						"y": 407,
						"view": 1
					},
					"������ ��": {
						"x": 1143,
						"y": 392,
						"view": 1
					},
					"������ ���": {
						"x": 1120,
						"y": 390,
						"view": 1
					},
					"���� �� ��": {
						"x": 1086,
						"y": 510,
						"view": 1
					},
					"���� ��": {
						"x": 1073,
						"y": 499,
						"view": 1
					},
					"���� �ո�": {
						"x": 1062,
						"y": 464,
						"view": 1
					},
					"���� ��": {
						"x": 1073,
						"y": 390,
						"view": 1
					},
					"���� ���": {
						"x": 1099,
						"y": 388,
						"view": 1
					},
					"�Ӹ� ��": {
						"x": 1112,
						"y": 309,
						"view": 1
					},
					"�Ӹ�": {
						"x": 1109,
						"y": 355,
						"view": 1
					},
					"��": {
						"x": 1111,
						"y": 376,
						"view": 1
					},
					"ô��4": {
						"x": 1121,
						"y": 389,
						"view": 1
					},
					"ô��3": {
						"x": 1132,
						"y": 427,
						"view": 1
					},
					"ô��2": {
						"x": 1134,
						"y": 457,
						"view": 1
					},
					"ô��1": {
						"x": 1134,
						"y": 482,
						"view": 1
					},
					"ô��0": {
						"x": 1137,
						"y": 516,
						"view": 1
					},
					"������": {
						"x": 1130,
						"y": 532,
						"view": 1
					},
					"��": {
						"x": 1096,
						"y": 350,
						"view": 1
					}
				},
				"label": "������",
				"type": "pose"
			}
		},
		{
			"pose": {
				"location": {
					"������ �� ��": {
						"x": 1027,
						"y": 604,
						"view": 1
					},
					"������ �ߵ޲�ġ": {
						"x": 1007,
						"y": 603,
						"view": 1
					},
					"������ ��": {
						"x": 976,
						"y": 591,
						"view": 1
					},
					"������ �ٸ�": {
						"x": 976,
						"y": 502,
						"view": 1
					},
					"������ �����": {
						"x": 950,
						"y": 415,
						"view": 1
					},
					"���� �� ��": {
						"x": 959,
						"y": 570,
						"view": 1
					},
					"���� �ߵ޲�ġ": {
						"x": 941,
						"y": 567,
						"view": 1
					},
					"���� ��": {
						"x": 913,
						"y": 555,
						"view": 1
					},
					"���� �ٸ�": {
						"x": 934,
						"y": 480,
						"view": 1
					},
					"���� �����": {
						"x": 943,
						"y": 400,
						"view": 1
					},
					"������ �� ��": {
						"x": 1082,
						"y": 412,
						"view": 1
					},
					"������ ��": {
						"x": 1064,
						"y": 400,
						"view": 1
					},
					"������ �ո�": {
						"x": 1012,
						"y": 371,
						"view": 1
					},
					"������ ��": {
						"x": 985,
						"y": 310,
						"view": 1
					},
					"������ ���": {
						"x": 983,
						"y": 293,
						"view": 1
					},
					"���� �� ��": {
						"x": 948,
						"y": 398,
						"view": 1
					},
					"���� ��": {
						"x": 946,
						"y": 380,
						"view": 1
					},
					"���� �ո�": {
						"x": 943,
						"y": 330,
						"view": 1
					},
					"���� ��": {
						"x": 965,
						"y": 281,
						"view": 1
					},
					"���� ���": {
						"x": 979,
						"y": 288,
						"view": 1
					},
					"�Ӹ� ��": {
						"x": 1000,
						"y": 229,
						"view": 1
					},
					"�Ӹ�": {
						"x": 990,
						"y": 265,
						"view": 1
					},
					"��": {
						"x": 980,
						"y": 281,
						"view": 1
					},
					"ô��4": {
						"x": 963,
						"y": 292,
						"view": 1
					},
					"ô��3": {
						"x": 948,
						"y": 323,
						"view": 1
					},
					"ô��2": {
						"x": 944,
						"y": 344,
						"view": 1
					},
					"ô��1": {
						"x": 943,
						"y": 363,
						"view": 1
					},
					"ô��0": {
						"x": 935,
						"y": 387,
						"view": 1
					},
					"������": {
						"x": 943,
						"y": 400,
						"view": 1
					},
					"��": {
						"x": 1024,
						"y": 267,
						"view": 1
					}
				},
				"label": "ȣ����",
				"type": "pose"
			}
		}
	]
}
*/