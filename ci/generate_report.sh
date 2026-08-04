#!/bin/bash
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

mkdir -p "$SCRIPT_DIR/reports"
mkdir -p "$SCRIPT_DIR/logs"


LOG_FILE="$SCRIPT_DIR/logs/build.log"
REPORT="$SCRIPT_DIR/reports/build_report.html"

DATE=$(date)

PASS=$(grep -c "\[PASS\]" "$LOG_FILE")
FAIL=$(grep -c "\[ERROR\]" "$LOG_FILE")
INFO=$(grep -c "\[INFO\]" "$LOG_FILE")

cat > "$REPORT" <<EOF
<!DOCTYPE html>

<html>

<head>

<title>Embedded Linux CI Report</title>

<style>

body{
font-family:Arial;
background:#f2f2f2;
padding:30px;
}

table{
border-collapse:collapse;
width:60%;
}

th,td{
border:1px solid black;
padding:10px;
text-align:left;
}

.pass{
color:green;
font-weight:bold;
}

.fail{
color:red;
font-weight:bold;
}

.info{
color:blue;
font-weight:bold;
}

pre{
background:white;
padding:15px;
border:1px solid #ddd;
}

</style>

</head>

<body>

<h1>Embedded Linux CI Build Report</h1>

<p><b>Date :</b> $DATE</p>

<table>

<tr>
<th>Type</th>
<th>Count</th>
</tr>

<tr>
<td class="pass">PASS</td>
<td>$PASS</td>
</tr>

<tr>
<td class="fail">FAIL</td>
<td>$FAIL</td>
</tr>

<tr>
<td class="info">INFO</td>
<td>$INFO</td>
</tr>

</table>

<h2>Build Log</h2>

<pre>

$(cat "$LOG_FILE")

</pre>

</body>

</html>

EOF

echo "Report Generated : $REPORT"
